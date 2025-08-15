#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string x = s, y = t;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if (x != y) {
        cout << -1 << "\n";
        return 0;
    }
 
    vector<int> z;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;
        int j = i + 1;
        while (j < n && s[j] != t[i]) j++;
        for (int k = j; k > i; k--) {
            swap(s[k], s[k - 1]);
            z.push_back(k); 
        }
    }
 
    cout << z.size() << "\n";
    for (int i = 0; i < (int)z.size(); i++) {
        cout << z[i] << " ";
    }
    cout << "\n";
 
    return 0;
}
