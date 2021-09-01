#include <iostream>
using namespace std;

class Box{
    protected:
        double width;
    public:
        void setWidth(double w){
            width = w;
        }
        friend void printWidth(Box box);
};

void printWidth(Box box){
    cout<<"Box Width: "<<box.width;
}

int main(){
    Box box;
    box.setWidth(10.1);
    printWidth(box);
}