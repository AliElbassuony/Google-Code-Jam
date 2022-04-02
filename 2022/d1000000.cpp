#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define all(v) v.begin(), v.end()

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;

void solve() {
  int n;
  cin >> n;
  vi v(n);
  for(auto &i : v)
    cin >> i;

  sort(all(v));
  int it = 1;

  for(auto i : v){
    if(it > i)
        continue;
        it++;
  }

  cout << it - 1 << endl;

}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//    freopen("in.txt", "r", stdin);
    int t = 1, it = 1;
    cin >> t;

    while (t--) {
        cout << "Case #" << it++ << ": ";
        solve();
    }
}
