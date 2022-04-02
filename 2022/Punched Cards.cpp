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
  int r,c;
  cin >> r>>c;
  int rows = (r << 1) + 1;
  int cols = (c << 1) + 1;

  char arr[rows][cols];
    arr[0][0] = arr[1][0] = arr[0][1] = arr[1][1] = '.';
  for(int i = 1;i < rows;i+=2)
  for(int j = 1;j < cols;j+=2){
        if(i == 1 && j == 1)
            continue;

        arr[i][j] = '.';
        arr[i - 1][j] = arr[i + 1][j] = '-';
        arr[i][j - 1] = arr[i][j + 1] = '|';
        arr[i - 1][j + 1] = arr[i + 1][j + 1] = arr[i - 1][j - 1] = arr[i + 1][j - 1] = '+';
  }

  for(int i = 0;i < rows;i++){
  for(int j = 0;j < cols;j++){
    cout << arr[i][j];
  }
  cout<<endl;
  }



}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//    freopen("in.txt", "r", stdin);
    int t = 1, it = 1;
    cin >> t;

    while (t--) {
        cout << "Case #" << it++ << ":\n";
        solve();
    }
}
