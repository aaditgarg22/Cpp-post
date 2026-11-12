#include <iostream>
using namespace std;
struct student
{
   int roll;
   string  name;
   float marks;

};
int main(){
    student s1;
    s1.roll=1;
    s1.name="Aadit Garg";
    s1.marks= 97.5;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.marks<<endl;

}
