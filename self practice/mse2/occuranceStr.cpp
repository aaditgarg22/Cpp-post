#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    int count[128]={0};
  //  sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        count[ch]++;
    }
    for(char i='A';i<='Z';i++){
        if(count[i]>0){
            cout<<i<<" = "<<count[i]<<endl;
        }
    }
    for(char i='a';i<='z';i++){
        if(count[i]>0){
            cout<<i<<" = "<<count[i]<<endl;
        }
    }

}