#include <iostream>
using namespace std;

long long power(long long z, int y) {
    long long result = 1;
    for (int i = 0; i < y; ++i) {
        result *= z;
    }
    return result;
}
long long calculate(long long x, int n) {
    long long sum = 0;
    for (int i = 0; i <= n; i += 2) {
        if (i == 0){
            sum += power(x, 0) - 1;
        }else{
            sum += power(x, i);}
    }
    return sum;
}

int main() {
    long long x;
    int n;
    cin >> x >> n;
    cout << calculate(x, n) << endl;
    return 0;
}
