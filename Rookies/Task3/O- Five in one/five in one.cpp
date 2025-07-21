#include <iostream>
using namespace std;

bool Prime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
bool Palindrome(int x) {
    int original = x;
    int reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }
    if (original == reversed) {
        return true;
    } else {
        return false;
    }
}
int countDivisors(int x) {
    int count = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    return count;
}
int Max(int arr[], int n) {
    int maxval = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxval) {
            maxval = arr[i];
        }
    }
    return maxval;
}
int Min(int arr[], int n) {
    int minval = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minval) {
            minval = arr[i];
        }
    }
    return minval;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int primeCount = 0;
    int palindromeCount = 0;
    int maxDivisors = 0;
    int numberWithMaxDivisors = 0;

    for (int i = 0; i < n; i++) {
        if (Prime(arr[i])) {
            primeCount++;
        }
        if (Palindrome(arr[i])) {
            palindromeCount++;
        }

        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            numberWithMaxDivisors = arr[i];
        } else if (divisors == maxDivisors && arr[i] > numberWithMaxDivisors) {
            numberWithMaxDivisors = arr[i];
        }
    }

    cout << "The maximum number : " << Max(arr, n) << endl;
    cout << "The minimum number : " << Min(arr, n) << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << numberWithMaxDivisors << endl;

    return 0;
}
