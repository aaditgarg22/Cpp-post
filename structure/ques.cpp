// task - make multiple data using structures ;
#include <iostream>
using namespace std;
struct employees
{
   int id;
   string  name;
   double sales;

};
int main(){
    employees e1;
    e1.id=1;
    e1.name="Aadit Garg";
    e1.sales= 90211;
    
    employees e2;
    e2.id=2;
    e2.name="Aman";
    e2.sales= 40000;
    
    employees e3;
    e3.id=3;
    e3.name="Anmol";
    e3.sales= 2000;
    
    employees e4;
    e4.id=4;
    e4.name="Anubhav";
    e4.sales= 100230;
    // this is wrong 
// for(int i=1;i<5;i++){
//     cout<<ei.name<<endl;
// }


    cout<<e1.name<<endl;
    cout<<e1.id<<endl;
    cout<<e1.sales<<endl;
    cout<<e2.name<<endl;
    cout<<e2.id<<endl;
    cout<<e2.sales<<endl;
    cout<<e3.name<<endl;
    cout<<e3.id<<endl;
    cout<<e3.sales<<endl;
    cout<<e4.name<<endl;
    cout<<e4.id<<endl;
    cout<<e4.sales<<endl;
}
