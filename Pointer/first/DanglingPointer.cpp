#include <bits/stdc++.h>
using namespace std;
int main(){
    int *p;
   {
    int a=5;
    p=&a;
    cout<<*p<<" "<<p<<endl;
   }
   cout<<*p<<endl;  // dangling pointer
}
