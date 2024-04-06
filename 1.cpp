#include<iostream>
using namespace std;
class Student {
    // private:
    // string name;
    // int roll_no;
    public:
    string name;
    int roll_no;
      Student get_data(){

      }
    // protected:
    // int a;

};
int main (){
    cout<<"Welcome to learn OOPs Programs.\n";
    Student obj1;
    obj1.name = "Pradeep Kumar";
    obj1.roll_no = 38;
    cout<<"Name : "<<obj1.name<<"\n"<<"Roll Number : "<<obj1.roll_no<<endl;
    return 0;
}