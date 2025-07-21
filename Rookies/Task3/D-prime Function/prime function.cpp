#include <iostream>
using namespace std;

bool prime(long long n) {
    if (n <= 1) {
        return false;
    }
    else if (n == 2) {
        return true;
    }
    else if (n % 2 == 0) {
        return false;
    }
    else {
        for (long long i = 3; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (prime(n)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
