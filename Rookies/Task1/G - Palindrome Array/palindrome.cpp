#include <iostream>
#include <vector>
using namespace std;
bool reda(vector<int>& A) {
    int start = 0;
    int end = A.size() - 1;
    while (start < end) {
        if (A[start] != A[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
 
int main() {
    int x;
    cin >> x;
    vector<int> A(x);
    for (int i = 0; i < x; i++) {
        cin >> A[i];
    }
    if (reda(A)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}