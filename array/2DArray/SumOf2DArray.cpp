#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, cols;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    long long a[rows][cols];
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"position of element : "<<i+1<<j+1<<endl;
            cin>>a[i][j];
            
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           sum+=a[i][j];
            
        } 
        cout<<endl;
    }

    cout<<"Sum of 2D array is : "<<sum;
}