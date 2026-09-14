#include <iostream>
using namespace std;
int main(){
    int a[20];
    int n;
    cin>>n;
    bool c=true;
    for(int b=0;b<n;b++){
        cin>>a[b];
    }
    
    int val;
    cout<<"Enter value to search : ";
    cin>>val;

    for(int i=1;i<=n;i++){
        if(i==val){
            cout<<"Found at : "<<i<<endl;
            c=false;
        }
    }
if(c==true){
    cout<<"No such value found\n";
}
}