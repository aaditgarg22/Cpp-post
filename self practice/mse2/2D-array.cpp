#include <bits/stdc++.h>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void input(int a[][MAX_COLS], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
}

void output( int a[][MAX_COLS], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    int row, col;
    cin >> row >> col;

    if (row <= 0 || row > MAX_ROWS || col <= 0 || col > MAX_COLS) {
        cout << "Invalid array size.";
        return 1;
    }

    int arr[MAX_ROWS][MAX_COLS];

    cout << "Now enter values of array: ";
    input(arr, row, col);

    cout << "Now printing values of array:\n";
    output(arr, row, col);
}
