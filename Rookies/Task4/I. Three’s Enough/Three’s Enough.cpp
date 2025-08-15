#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> freq(n + 1, 0);
        for (int num : a) {
            freq[num]++;
        }

        int result = -1;
        for (int i = 1; i <= n; ++i) {
            if (freq[i] >= 3) {
                result = i;
                break;
            }
        }

        cout << result << '\n';
    }
    return 0;
}