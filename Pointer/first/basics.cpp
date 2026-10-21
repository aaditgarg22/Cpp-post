#include <iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    cout<<*p<<" "<<&p<<endl; //adress of pointer by &p and address of variable its pointing to p, and the value to variable its pointing to *p 
    cout << a <<" "<<&a;
}