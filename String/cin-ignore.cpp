#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;

    cout << "Enter your text : ";
    cin >> name;

    cout << name << " ";

    cin.ignore();

    getline(cin, name);

    cout << name;
}