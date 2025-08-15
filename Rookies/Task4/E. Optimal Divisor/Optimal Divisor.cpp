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
        long long z = -1;
        int c = 2;
        for (int x = 2; x <= n; x++) {
            int k = n / x;
            long long sum = 1LL * x * k * (k + 1) / 2;
            if (sum > z) {
                z = sum;
                c = x;
            }
        }
        cout << c << "\n";
    }
    return 0;
}