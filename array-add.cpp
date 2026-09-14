#include <iostream>
using namespace std;
int main(){
    int a[20];
    int n;
    cin>>n;
    

    for(int b=0;b<n;b++){
        cin>>a[b];
    }
    
    
        // for(int i=(n-2);i>=0;i--){
        //     a[i+1]=a[i];  
        // }

cout<<"postion where to add : ";
int pos, val;
cin>>pos;
cout<<"value to add : ";
cin>>val;
 
 for (int p=n;p>pos;p++){
    a[p]=a[p-1];
}

a[pos]=val;
n++;
cout<<"array after insertion : ";

for(int j=0;j<n;j++){
     cout<<*(a+j);
}


}