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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++) {
            int b;
            string x;
            cin >> b >> x;
 
            
            for (char y : x) {
                if (y == 'U') {
                    a[i] = (a[i] - 1 + 10) % 10; 
                } else if (y == 'D') {
                    a[i] = (a[i] + 1) % 10; 
                }
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}