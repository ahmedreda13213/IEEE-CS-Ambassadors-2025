#include <iostream>
#include <string>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        if (S.length() > 10) {
            cout << S[0] << S.length() - 2 << S.back() << endl;
        } else {
            cout << S << endl;
        }
    }
    return 0;
}
