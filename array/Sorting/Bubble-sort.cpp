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

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                 a[j]=a[j+1];
                    a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array is : ";
    for(int j=0;j<n;j++){   
        cout<<a[j]<<" ";
    }
}