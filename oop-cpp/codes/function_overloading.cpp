//compile time polymorphism / Early Binding

//Functions can not be overloaded if 

/* 1. they differ only in return type. It shows compilation error saying functions is re-defined;
   
   2. if they differ only parameter type of ptr and arr, they are considered same.

   3. Parameter type const and volatile are ignored. So const int and int are treated same 
   if they are args but supports if that is return type of function. If they should be treated with args, pointers can help.


   4. If they differ only in the default args, they are treated same.

   5. Member funcs can not be over loaded if one of them is static func. 

*/

#include <iostream>
using namespace std;

class PrintData{
    public:
        void print(int i){
            cout<<"Int: "<< i<<endl;
        }
        void print(double i){
            cout<<"Float: "<<i<<endl;
        }
        void print(char* i){
            cout<<"Char: "<<i<<endl;
        }
};

int main(){
    PrintData pd;
    pd.print(2);
    pd.print("a");
    pd.print(2.3);
}

