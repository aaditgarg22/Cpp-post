#include <bits/stdc++.h>
using namespace std;

long long toh(int n, char source, char aux, char des) {
    if (n == 0) {
        return 0;
    }

    long long moves = toh(n - 1, source, des, aux);
    ++moves; // Move the largest disk from source to des.
    moves += toh(n - 1, aux, source, des);
    return moves;
}

int main() {
    int num;
    cout<<"enter number of plates : ";
    cin>>num;

    if (num < 0) {
        cout << "Number of plates cannot be negative." << endl;
        return 1;
    }

    cout << "total number of moves - "
         << toh(num, 'A', 'B', 'C') << endl;
}