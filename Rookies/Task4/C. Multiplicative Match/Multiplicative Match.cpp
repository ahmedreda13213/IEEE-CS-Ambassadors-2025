#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        long long ans = 0;
        long long p = 1;
        while (true) {
            if (p > r2) break;
            long long minX = max(l1, (l2 + p - 1) / p);
            long long maxX = min(r1, r2 / p);
            if (minX <= maxX) ans += (maxX - minX + 1);
            if (p > LLONG_MAX / k) break; 
            p *= k;
        }
        cout << ans << "\n";
    }
    return 0;
}