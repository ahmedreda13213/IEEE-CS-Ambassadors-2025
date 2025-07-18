#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    string y;
    cin >> x >> y;

    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string Key =      "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    char encode[128] = {}, decode[128] = {};

    for (int i = 0; i < Original.size(); ++i) {
        encode[Original[i]] = Key[i];
        decode[Key[i]] = Original[i];
    }

    for (int i = 0; i < y.size(); ++i) {
        if (x == 1)
            cout << encode[y[i]];
        else
            cout << decode[y[i]];
    }

    return 0;
}
