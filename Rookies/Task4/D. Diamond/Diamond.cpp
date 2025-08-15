#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x = n + 1, y = 0, z = m + 1, b = 0;
        for (int i = 1; i <= n; i++) {
            string row;
            cin >> row;
            for (int j = 1; j <= m; j++) {
                if (row[j - 1] == '#') {
                    if (i < x) x = i;
                    if (i > y) y = i;
                    if (j < z) z = j;
                    if (j > b) b = j;
                }
            }
        }
        cout << (x + y) / 2 << " " << (z + b) / 2 << "\n";
    }
    return 0;
}