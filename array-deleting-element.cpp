#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n+1];
    bool c=true;
    for(int b=0;b<n;b++){
        cin>>a[b];
    }
    
    int val;
    cout<<"Enter value to search : ";
    cin>>val;

    for(int i=1;i<=n;i++){
        if(a[i]==val){
            cout<<"Found at : "<<i<<" (Indexing started from 1 not 0)"<<endl;
            c=false;

            cout<<"deleting value : "<<val<<endl;

            for(int j=i-1;j<n;j++){
                a[j]=a[j+1];

            }
            break;
        }
    }


if(c==true){
    cout<<"No such value found\n";
}

for(int k=0;k<n;k++){
    cout<<a[k]<<" ";
}
}