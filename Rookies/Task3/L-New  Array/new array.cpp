#include <iostream>
using namespace std;

void concatArrays(int a[], int b[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    int a[1000], b[1000];
    for (int i = 0; i < n; ++i){
       cin >> a[i];  
    }
    for (int i = 0; i < n; ++i){
         cin >> b[i];

    }
    concatArrays(a, b, n);
    return 0;
}
