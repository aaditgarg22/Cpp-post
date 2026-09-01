#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter how many times reapeat pattern : ";
    int n;
    cin>>n;
    
    for( int i=0; i<=n; i++){
        for(int j=n-i ; j<=n ;j++){
            cout<<" ";
        }
        for(int c=n;c>=i;c--){
        cout<<"X ";}
    cout<<endl;
    }

    return 0;
}