#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string encoded;

    cin >> n;
    cin >> encoded;

    for (int i = 0; i < n; i += 4) {
        int value = 0;

        for (int j = i; j < i + 4; j++) {
            value = value * 2 + (encoded[j] - '0');
        }

        cout << char('a' + value);
    }

    return 0;
}