#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        vector<string> x(8);
        for (int i = 0; i < 8; ++i) {
            cin >> x[i];
        }
        string y;
        for (int col = 0; col < 8; ++col) {
            y.clear();
            for (int row = 0; row < 8; ++row) {
                if (x[row][col] != '.') {
                    y += x[row][col];
                }
            }
            if (!y.empty()) {
                cout << y << endl;
                break;
            }
        }
    }
    return 0;
}