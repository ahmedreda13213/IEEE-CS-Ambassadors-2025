#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        for (char &c : b) {
            if (c == 'p') c = 'q';
            else if (c == 'q') c = 'p';
        }
        cout << b << endl;
    }
    return 0;
}