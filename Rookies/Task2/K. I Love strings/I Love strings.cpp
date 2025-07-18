#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t, result;
        cin >> s >> t;
        
        int z = s.length(), y = t.length();
        int x = min(z, y);
        

        for (int i = 0; i < x; i++) {
            result += s[i];
            result += t[i];
        }

        if (z > y) {
            result += s.substr(x);
        } else {
            result += t.substr(x);
        }

        cout << result << '\n';
    }
    return 0;
}
