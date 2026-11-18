#include <bits/stdc++.h>
using namespace std;
int palindrome(int n){
int o=n,rev=0;
while(n>0){
    int digit=n%10;
    rev = rev*10 + digit;
    n/=10;
}
return o==rev;
}
int main(){
    int start , end;
    cout<<"give starting and end limit : ";
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(palindrome(i)){
            cout<<i<<" ";
        }
    }
    cout<<"are all the palindromes in the given range\n";
}