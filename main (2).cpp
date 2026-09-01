#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter how many times reapeat pattern : ";
    int n;
    cin>>n;
    
    for( int i=0; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }

    return 0;
}