#include <iostream>
#include <string>
using namespace std;

int main() {
    string message;
    cin >> message;

    string cleanMessage;

    for (char current : message) {
        if (!cleanMessage.empty() && cleanMessage.back() == current) {
            cleanMessage.pop_back();
        } else {
            cleanMessage.push_back(current);
        }
    }

    if (cleanMessage.empty()) {
        cout << "Empty String";
    } else {
        cout << cleanMessage;
    }

    return 0;
}