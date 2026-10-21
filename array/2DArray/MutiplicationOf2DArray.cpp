#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1,r2,c2,r3,c3;
    cout<<"Enter the number of rows and columns for Matrix A: ";
    cin>>r1>>c1;
    long a[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<i << j<<endl;
            cin>>a[i][j];
           
        }
    }
    cout<<"Enter the number of rows and columns for Matrix B: ";
    cin>>r2>>c2;
    long b[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){  
            cout<<i << j<<endl;
            cin>>b[i][j];
           
        }
    }
    long c[r3][c3];
    if(c1!=r2){
        cout<<"Matrix multiplication is not possible";
        return 0;
    }
    if(c1==r2){
        r3=r1;
        c3=c2;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Resultant Matrix is : "<<endl;
    for(int i=0;i<r3;i++){
        for(int j=0;j<c3;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
            

}   