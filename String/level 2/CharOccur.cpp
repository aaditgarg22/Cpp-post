#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count[128] = {0};

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {
            count[ch]++;
        }
    }

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (count[ch] > 0) {
            cout << ch << " = " << count[ch] << endl;
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (count[ch] > 0) {
            cout << ch << " = " << count[ch] << endl;
        }
    }

    return 0;
}