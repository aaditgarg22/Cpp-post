#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];

    int *first = a;
    int *last = a + n;

    cout << last - first;
}
