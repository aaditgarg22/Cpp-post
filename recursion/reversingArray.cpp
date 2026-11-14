#include <bits/stdc++.h>
using namespace std;
void display(const int y[], int n){
    for(int i = 0; i < n; i++){
        cout << y[i] << " ";
    }
}

void reverse1(int x[], int n){
    if (n <= 1) return;

    swap(x[0], x[n - 1]);
    reverse1(x + 1, n - 2);
}

int main(){
    int n;
    cout<<"enter no. of terms : ";
    cin>>n;
    int a[n];
    cout<<"enter terms of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse1(a, n);
    display(a, n);
    
}