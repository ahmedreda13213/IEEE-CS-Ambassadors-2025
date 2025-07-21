#include <iostream>
using namespace std;

void MinMax(int arr[], int n, int &mn, int &mx) {
    mn = arr[0];
    mx = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < mn) {
            mn = arr[i];
        }
         else if (arr[i] > mx) {
            mx = arr[i];
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int minval, maxval;
    MinMax(arr, n, minval, maxval);
    cout << minval << " " << maxval << endl;
    return 0;
}
