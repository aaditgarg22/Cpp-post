#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    cout<<&a<<endl;
    int *b=0;
    cout<<sizeof(a)<<" ";
    cout<<sizeof(b)<<" ";  //size of pointer is 8 bytes in 64 bit system
    cout<<sizeof(*b)<<" ";

    // cout<<endl<<endl<<*b<<endl<<&b<<endl;
     
}