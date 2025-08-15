#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long x = 0;
        bool y = true;
        bool z = false; 
 
        for (int i = 0; i < n; i++) {
            x += a[i];
            if (x < 0) { 
                y = false;
                break;
            }
            if (x == 0) {
                z = true;
                for (int j = i + 1; j < n; j++) {
                    if (a[j] != 0) {
                        y = false;
                        break;
                    }
                }
                break;
            }
        }
        if (x != 0) y = false; 
 
        cout << (y ? "Yes\n" : "No\n");
    }
    return 0;
}
