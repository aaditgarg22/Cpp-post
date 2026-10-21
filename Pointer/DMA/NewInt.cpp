#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cout<<"enter size : ";
 
cin>>n;
int *arr= new int[n]; // USED DYNAMIC MEMORY ALLOCATION 
cout<<"enter values : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 cout << "entered values : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
delete[] arr;

}