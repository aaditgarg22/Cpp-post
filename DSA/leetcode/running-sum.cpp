#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter you size of Array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    for(int i = 1; i < n; i++) {
        arr[i] = arr[i] + arr[i-1];
    }
    cout <<"Running Sum Of Array is : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}