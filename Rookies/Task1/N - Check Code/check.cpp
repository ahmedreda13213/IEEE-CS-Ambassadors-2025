#include <iostream>
using namespace std;
int main() {
    const int x = 20; 
    char code[x];
    int A, B;
    cin >> A >> B;
    cin >> code;
    bool valid = true;
    if (code[A] != '-') {
        valid = false;
    } else {
        for (int i = 0; i < A + B + 1; ++i) {
            if (i != A && (code[i] < '0' || code[i] > '9')) {
                valid = false;
                break;
            }
        }
    }
    if (valid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}