#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <complex>
#include <string>
#include <bitset>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <assert.h>
#include <stdio.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 1, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;

void solve(int cnt) {
    int n, c;
    cin >> n >> c;
    int v[n]{0};
    int vis[n + 1]{0};
    iota(v, v + n, 1);
    int mini = n - 1, maxi = ((n - 2 + 1) * (2 + n) >> 1);
    if (mini <= c && maxi >= c) {
        int ans = c - mini;
        if (ans < n) {
            reverse(v, v + ans + 1);
        } else {
            int temp = n, rem = n - 1, tot = rem;
            while (mini--) {
                if (temp + tot - 1 <= c) {
                    vis[temp] = 1;
                    tot += temp - 1;
                    rem--;
                }
                temp--;
            }
            int s = 0;
            bool flag = 0;
            for (int i = n; i > 0; --i) {
                if (vis[i]) {
                    reverse(v + s, v + s + i);

                    if (flag)
                        s++;
                    flag = !flag;
                }
            }
        }
        cout << "Case #" << cnt << ": ";
        for (int i = 0; i < n; ++i) {
            cout << v[i] << " ";
        }
        cout << el;
    } else {
        cout << "Case #" << cnt << ": IMPOSSIBLE" << el;
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    int cnt = 1;
    cin >> t;
    while (t--)
        solve(cnt++);

}