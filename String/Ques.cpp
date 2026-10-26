#include <bits/stdc++.h>
using namespace std;

int main() {
   string email;
   cout<<"Enter yout email : ";
   getline(cin,email);
    for(int i=0;i<(email.length()-9);i++){
       if(email[i]=='@'){
        int pos=i;
        break;
       }
        cout<<email[i];
    }

    


}