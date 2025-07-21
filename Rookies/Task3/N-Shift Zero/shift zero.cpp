#include <iostream>
using namespace std;

void shiftZeros(int a[], int n) {
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            a[index++] = a[i];
        }
    }
    while (index < n) {
        a[index++] = 0;
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    shiftZeros(a, n);
    return 0;
}
