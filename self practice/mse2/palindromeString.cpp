#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"Enter your string : ";
cin>>s;

//bool palin = true;
for(int i=0; i<s.length()/2;i++){
    if(s[i]!=s[s.length()-1-i]){
        cout<<"Not a Palindrome\n";
        return 0;
    }
}
cout << "Is a Palindrome\n";
}