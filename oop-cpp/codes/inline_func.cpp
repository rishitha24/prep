#include <iostream>
using namespace std;

inline int square(int i){
    return i*i;
}

int main(){
    cout<<square(2)<<endl;
    cout<<square(3)<<endl;
}

//if the inline func is more than a line, the word inline is ignored

/*

Advantage is that , 

1. compiler places the copy of this code at each point where ever the function is called during compilation.
indeed reducing overheads of return type, stack operation. 

2. Adding inline brings in context specific optimisation on body of the func while not possible for normal funcs.

3. Helpful for embedded systems, since the code is less instead of getting it from the preamble. Here code size matters than speed.

Disavantages,

1. varibales here may consume extra registers , can create over head in resource utilisation

2. Many inline functions may increase size of binary executable file because of having same copy of code multiple times. Can lead to thrashing , reduces the system performance.

3. If the inline function code is changed, this can increase compile time over head as it has to be updated every where!


*/