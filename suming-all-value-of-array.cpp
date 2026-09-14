#include <iostream>
using namespace std;
int main(){
    
    int n,sum=0;
    cin>>n;
    int a[20],b[20];
    bool c=true;
    for(int b=0;b<n;b++){
        cin>>a[b];
    }
    
for(int i=0;i<n;i++){
       sum += *(a+i);
    }

cout<<"SUM OF ALL VALUE'S OF ARRAY : "<<sum;
}