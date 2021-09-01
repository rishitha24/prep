#include <iostream>
using namespace std;

// Base or Super class

class Shape{
    protected:
        int width;
        int height;
    public:
        void setHeight(int height){
            this->height = height;
        }
        void setWidth(int width){
            this->width = width;
        }
};

//Sub or Derived classes

class Rectangle : public Shape{         //Single Inheritance
    public:
        int getArea(){
            return width*height;
        }
};

//Base Class

class Vehicle{
    public:
        Vehicle(){
            cout<<"Vehicle Class"<<endl;
        }
};

class FourWheeler{
    public:
        FourWheeler(){
            cout<<"Four Wheeler Class"<<endl;
        }
};

class Car : public Vehicle, public FourWheeler{         // Multiple Inheritance
    public:
        Car(){
            cout<<"Car Class"<<endl;
        }
};

//Multi Level Inheritance : Vehicle -> Four Wheeler -> Car

//Hierarchial Inheritance : More than one derived class is created from a single base class. 

//Hybrid Inheritance : Combination of two types of inheritances. Like, Hierarchial + Multiple

//Multipath Inheritance : Diamond Problem. 

int main()
{
    Rectangle R1;  
    R1.setHeight(5);    R1.setWidth(4);
    cout<<R1.getArea();
    
    Car C1;
    return 0;
}