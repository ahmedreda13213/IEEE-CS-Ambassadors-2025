#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string x;
    int cost[26];
    cin >> x;

    for (int i = 0; i < 26; ++i) {
        cin >> cost[i];
    }

    int n = x.size();

    for (int i = 0; i < n;) {
        if (x[i] != '?') {
            i++;
            continue;
        }

        int j = i;
        while (j < n && x[j] == '?') {
            j++;
        }

        char left;
        if (i > 0) {
            left = x[i - 1];
        } else {
            left = 0;
        }

        char right;
        if (j < n) {
            right = x[j];
        } else {
            right = 0;
        }

        char best = 'a';
        int min_cost = 1000000000;

        for (char c = 'a'; c <= 'z'; ++c) {
            int y = 0;

            if (left) {
                y += abs(cost[c - 'a'] - cost[left - 'a']);
            }

            if (right) {
                y += abs(cost[c - 'a'] - cost[right - 'a']);
            }

            if (y < min_cost || (y == min_cost && c < best)) {
                min_cost = y;
                best = c;
            }
        }

        for (int k = i; k < j; ++k) {
            x[k] = best;
        }

        i = j;
    }

    long long total = 0;

    for (int i = 1; i < n; ++i) {
        total += abs(cost[x[i - 1] - 'a'] - cost[x[i] - 'a']);
    }

    cout << total << '\n';
    cout << x << '\n';

    return 0;
}
