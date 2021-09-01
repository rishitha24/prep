// Run time polymorphism / Late Binding

#include <iostream>
using namespace std;

class base{
    public:
        void print(){
            cout<<"Base class";
        }
        virtual void show(){
            cout<<"Virtual base";
        }
};

class derived : public base{
    public: 
        void print(){
            cout<<"Derived class";
        }
        void show(){
            cout<<"Virtual derived";
        }
};

int main(){
    base *ptr;
    derived d;
    ptr = &d;

    ptr->print();
    ptr->show();
}