#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int sum = 0;
    char digit;
    for (int i = 0; i < x; ++i) {
        cin >> digit;
        sum += digit - '0';
    }
    cout << sum <<endl;

    return 0;
}
