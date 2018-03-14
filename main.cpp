#include <iostream>
#include "stack_implement.hpp"

using namespace std;

int main(){
    stack_element * top = 0;
    int a = 5, b = 6, c = 8;
    int get = 0;

     push(top, a);
     push(top, b);
     pop(top,get);

     cout<<get<<"\n"<<isEmpty(top);

    return 0;
}
