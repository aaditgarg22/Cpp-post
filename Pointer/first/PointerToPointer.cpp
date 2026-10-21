#include <bits/stdc++.h>
using namespace std;
int main(){
 int x=10;
 int *p=&x;
 int **P1=&p;
 cout<<p<<" ";
 cout<<*p<<endl;
 cout<<P1<<" "<<*P1<<" "<<**P1<<" ";
}
