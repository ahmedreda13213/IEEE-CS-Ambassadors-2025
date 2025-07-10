#include <iostream>
using namespace std;

int reda(int x, int A[]) {
    int min_sum = 2000000000; 
    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            int sum = A[i] + A[j] + j - i;
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x;
        cin >> x;

        int A[100]; 
        for (int i = 0; i < x; i++) {
            cin >> A[i];
        }

        int result = reda(x, A);
        cout << result << endl;
    }

    return 0;
}
