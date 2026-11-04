#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Array must contain at least one element.";
        return 0;
    }

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int smallest = a[0];
    int largest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}