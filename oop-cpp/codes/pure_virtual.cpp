#include <iostream>
using namespace std;

class A{
    public:
        virtual void print() = 0;
};

class B : public A{
    public:
        void print(){
            cout<<"virtual function in derived class";
        }
};

int main(){
    A *a;
    B b;
    a = &b;
    a->print();
}