#include <bits/stdc++.h>
using namespace std;
int main() {

int a[3]={1,2,3};
int *p=a;
*(p+1)=*(p+1)+5;
p++;
*(p)=*(p-1)+5;
cout<<a[0]<<a[1]<<a[2];
// 1,6,3
}