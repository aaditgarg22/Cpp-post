#include <bits/stdc++.h>
using namespace std;

int main() {
   string name1="aadit";
    string name2="AADIT";
    
    // if(name1<name2){
    //      cout<<"Yes";
    // }
    // else cout << "No"; // --> No
    
    
    // if(name1==name2){
    //     cout<<"Yes";
    // }
    // else cout << "No"; //--> No 
    
//cout<<name1.compare(name2); // out is -ve, 0 , +ve 

cout<<name1.substr(0,3)<<endl; // here first digit before comma tells the starting point of the string after deletion and second tells the lenght 

// if only one digit is given in substr
cout<<name1.substr(4);
}