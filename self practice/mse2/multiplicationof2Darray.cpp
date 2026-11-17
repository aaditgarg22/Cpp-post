#include <iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cout<<"Enter rows and column size for matrix 1 : ";
    cin>>r1>>c1;
    int a[r1][c1];
    cout<<"Enter elements for matrix 1 : ";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cin>>a[i][j];
        }
    }
    
    
    cout<<"Enter rows and column size for matrix 2 : ";
    cin>>r2>>c2;
    int b[r2][c2];
    cout<<"Enter elements for matrix 2 : ";
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cin>>b[i][j];
        }
    }
    if(c1!=r2){
        cout<<"cannot multiply them";
        return 1;
    }
    else cout<<"Now multiplying two matrixes\n";

    int result[r1][c2] = {};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout<<"Result:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}