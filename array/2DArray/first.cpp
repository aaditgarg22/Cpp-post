#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    long long a[rows][cols];
    int num = 1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<i << j<<endl;
            cin>>a[i][j];
            // a[i][j] = num;
            // num++;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<"\t";
            
        }
        cout<<endl;
    }

    return 0;
}