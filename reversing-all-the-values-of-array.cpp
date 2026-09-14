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
    // BY USING ONLY 1 ARRAY

    for(int i=0;i<n/2;i++){
       int  temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
 
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }




// BY USNG 2 ARRAYS
// for(int k=0;k<n;k++){
//     b[n-k-1] =a[0+k];
// }
// for(int l=0;l<n;l++){
//     cout<<b[l]<<" ";
// }

}