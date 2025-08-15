#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    vector<long long> z;
    long long y = 0;
    int k = 1;
    while (true) {
        long long n = (1LL << k) - 1;
        long long b = n * (n + 1) / 2;
        y += b;
        if (y > 1e18) break;
        z.push_back(y);
        k++;
    }
 
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int low = 0;
        int high = z.size() - 1;
        int answer = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (z[mid] <= x) {
                answer = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}