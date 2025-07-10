#include <iostream>
#include <vector>
using namespace std;

pair<int, int> reda(int x, vector<int>& A) {
    int min_number = 1000000; 
    int min_position = -1;

    for (int i = 0; i < x; i++) {
        if (A[i] < min_number) {
            min_number = A[i];
            min_position = i + 1; 
        }
    }
    return {min_number, min_position};
}

int main() {
    int x;
    cin >> x;
    vector<int> A(x);
    for (int i = 0; i < x; i++) {
        cin >> A[i];
    }
    pair<int, int> result = reda(x, A);

    cout << result.first << " " << result.second << endl;

    return 0;
}
