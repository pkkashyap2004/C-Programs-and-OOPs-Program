#include<iostream>
using namespace std;
class Fruits {
    public:
    string name;
    string color;
};
int main() {
    Fruits Apple,Mango;
    Apple.name = "Apple";
    Mango.name = "Mango";
    Apple.color = "Red";
    Mango.color = "Yellow";
    cout<<"Fruits Name : "<<Apple.name<<"\n"<<"Fruits Color Name :"<<Apple.color<<endl;
    cout<<"Fruits Name : "<<Mango.name<<"\n"<<"Fruits Color Name :"<<Mango.color<<endl;
    return 0;
}