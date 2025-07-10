#include <iostream>
using namespace std;
 
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
 
        for (int i = 0; i < x; i++) {
            int y = A[i];
            for (int j = i; j < x; j++) {
                if (A[j] > y) {
                    y = A[j];
                }
                cout << y << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}