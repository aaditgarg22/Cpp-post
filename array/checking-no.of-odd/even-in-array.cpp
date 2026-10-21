#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[20],b[20];
    bool c=true;
    for(int b=0;b<n;b++){
        cin>>a[b];
    }
   int even=0,odd=0;
    for(int k=0;k<n;k++){
        if(a[k]%2==0){
            even++;
        }
        else{
           odd++;
        }
    }

cout<<"Total Even Numbers : "<<even<<endl;
cout<<"Total Odd Numbers : "<<odd<<endl;

}