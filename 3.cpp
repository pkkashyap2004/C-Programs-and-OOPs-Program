/*Write a program to indicate the use of object in class.*/
#include<iostream>
using namespace std;
class Test {
    int data;
    public:
    void set(int a ){
         data = a;
    }
    void show(){
        cout<<"Value of Data : "<<data<<endl;
    }

};
int main(){
    Test t;
    int number;
    cout<<"Enter any number : ";
    cin>>number;
    t.set(number);
    t.show();
}