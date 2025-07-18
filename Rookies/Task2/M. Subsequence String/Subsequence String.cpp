#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string y = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == y[j]) {
            j++;
            if (j == y.size()) break;
        }
    }
    
    if (j == y.size())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
