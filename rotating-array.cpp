#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    int a[20];
    bool c=true;
    for(int b=0;b<n;b++){
        cin>>a[b];
    }
cout<<"How many terms to left rotate : ";
int r;
cin>>r;

    for(int k=0;k<r;k++){
       for(int t=0;t<n;t++){
        int temp = a[0];
        a[t]=a[t+1];
        a[n]=temp;
       }
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}