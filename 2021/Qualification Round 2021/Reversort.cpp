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
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
        cin >> v[i];


    int c = 0,it = 0;
    for (int j = 0; j < n - 1; ++j) {
        it = j;
        for (int i = j + 1; i < n; ++i) {
            if(v[i] < v[it])
                it = i;
        }
        c += it - j + 1;
        reverse(v + j,v + it + 1);
    }

    cout << "Case #"<< cnt <<": "<< c << el;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    int cnt = 1;
    cin >> t;
    while (t--)
        solve(cnt++);

}