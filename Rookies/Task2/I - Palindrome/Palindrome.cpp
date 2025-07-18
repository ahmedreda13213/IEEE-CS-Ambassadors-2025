#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string S;
    cin >> S;
    bool isPalindrome = true;
    int n = S.size();
 
    for (int i = 0; i < n / 2; ++i) {
        if (S[i] != S[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}