#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    bool x = false;
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (!x) {
                count++;
                x = true;
            }
        } else {
            x = false;
        }
    }
    cout << count << '\n';
    return 0;
}
