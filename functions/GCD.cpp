#include <iostream>
using namespace std;

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    int n1,n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    cout<<"GCD of two numbers : "<<GCD(n1,n2);

}