#include <iostream>
using namespace std;

string reda(int x, int A[]) {
    int min_element = 100001; 
    int min_freq = 0;

    for (int i = 0; i < x; ++i) {
        if (A[i] < min_element) {
            min_element = A[i];
            min_freq = 1;
        } else if (A[i] == min_element) {
            min_freq++;
        }
    }

    if (min_freq % 2 == 1) {
        return "Lucky";
    } else {
        return "Unlucky";
    }
}

int main() {
    int N;
    cin >> N;
    int A[100]; 
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    string result = reda(N, A);
    cout << result << endl;

    return 0;
}
