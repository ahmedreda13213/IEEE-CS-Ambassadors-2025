#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int z = 0;
    for (int i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            int x = z, y = i - 1;
            while (x < y) {
                char temp = s[x];
                s[x] = s[y];
                s[y] = temp;
                x++;
                y--;
            }
            z = i + 1;
        }
    }

    cout << s << '\n';
    return 0;
}
