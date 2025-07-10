#include <iostream>
#include <vector>
using namespace std;

void reda(vector<int>& A) {
    int x = A.size();
    bool swapped;
    for (int i = 0; i < x - 1; i++) {
        swapped = false;
        for (int j = 0; j < x - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int x;
    cin >> x;

    vector<int> A(x);
    for (int i = 0; i < x; i++) {
        cin >> A[i];
    }
    reda(A);
    for (int i = 0; i < x; i++) {
        cout << A[i];
        if (i != x - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
