#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    int a[20];

    for(int b=0;b<n;b++){
        //cout << "enter value of "<<b+1<<" element : ";
        cin>>a[b];
    }

    for (int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            
                // swapping value but within for loop of i

                
            }
            swap(a[i],a[minindex]);
        }
    }

    cout<<"Sorted array is : ";
    for(int j=0;j<n;j++){   
        cout<<a[j]<<" ";
    }
}