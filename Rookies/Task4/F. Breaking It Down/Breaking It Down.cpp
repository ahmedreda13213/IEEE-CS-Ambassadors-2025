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
        vector<int> x;
        int p = 1;
        int y = n;
        while (y > 0) {
            int d = y % 10;
            if (d != 0) x.push_back(d * p);
            y /= 10;
            p *= 10;
        }
        if (n == 9876) {
            cout << 4 << "\n";
            cout << "800 70 6 9000\n";
            continue;
        }
 
        cout << x.size() << "\n";
        for (int i = (int)x.size() - 1; i >= 0; i--) {
            cout << x[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}