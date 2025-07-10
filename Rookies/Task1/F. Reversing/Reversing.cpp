#include <iostream>
#include <vector>
using namespace std;
 
void reda(vector<int>& A) {
    int start = 0;
    int end = A.size() - 1;
    while (start < end) {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
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