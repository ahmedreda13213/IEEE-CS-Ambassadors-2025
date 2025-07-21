#include <iostream>
#include <iomanip>
using namespace std;

void Average(double a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    double avg = sum / n;
    cout << fixed << setprecision(7) << avg << '\n';
}

int main() {
    int n;
    cin >> n;
    double arr[10000];    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Average(arr, n);
    return 0;
}
