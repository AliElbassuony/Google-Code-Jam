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
  int c,m,y,k;
  c = m = y = k = 1e6 + 19;
  int a,b,d,e;
  for(int i = 0;i < 3;++i){
    cin >> a >> b >> d >> e;
    c = min(c,a);
    m = min(m,b);
    y = min(y,d);
    k = min(k,e);
  }
    int sum = c + m + y + k;
    if ( sum < 1e6)
        cout << "IMPOSSIBLE"<<endl;
    else {
            int rem = sum - 1000000;
            while(rem){
                if(c)
                    c--;
                else if(m)
                    m--;
                else if(y)
                    y--;
                else if(k)
                    k--;
                else
                    break;
                rem--;
            }
            cout << c << " "<<m << " "<<y << " "<<k<<endl;
    }

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
