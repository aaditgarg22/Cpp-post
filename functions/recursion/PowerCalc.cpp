#include <bits/stdc++.h>
using namespace std;
int power(int a, int b){
if(b==0){return 1;}
return a*power(a,b-1);
}
int main(){
   int n;
   cout<<"base number : ";
    cin>>n;
    cout<<"power : ";
    int p;
    cin>>p;
    cout<<n<<" to the power "<<p<<" = "<<power(n,p); 
}