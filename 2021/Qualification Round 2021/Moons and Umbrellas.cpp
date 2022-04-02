#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e6 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;

const int M = 1001;
int memo[M][3];
// consider 0 = C , 1 = J
int x, y, n;
string s;

int dp(int idx, int prev) {
    // base case
    if (idx == n)
        return 0;
    // check if visited
    int &ret = memo[idx][prev];
    if (~ret)
        return ret;
    ret = 1e9;
    // transition
    // putting C
    if (s[idx] == '?' || s[idx] == 'C')
        ret = min(ret, (prev == 1 ? y : 0) + dp(idx + 1, 0));
    //putting J
    if (s[idx] == '?' || s[idx] == 'J')
        ret = min(ret, (prev == 0 ? x : 0) + dp(idx + 1, 1));
    return ret;
}

void solve() {
    cin >> x >> y >> s;
    n = s.size();
    memset(memo, -1, sizeof(memo));
    cout << dp(0,2)<<el;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1,it = 1;
    cin >> t;
    while (t--) {
        cout <<"Case #"<<it++<<": ";
        solve();
    }

}