#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int A[N];
    int x = 0, y = 0;
 
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] < A[x])
            x = i;
        if (A[i] > A[y])
            y = i;
    }
 
    swap(A[x], A[y]);
 
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
 
    return 0;
}