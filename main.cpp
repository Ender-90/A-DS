#include <iostream>
#include "stack_implement.hpp"
#include "queryImplementation.hpp"

using namespace std;

int main(){
//    stack_element * top = 0;
//    int a = 5, b = 6, c = 8;
//    int get = 0;
//
//     push(top, a);
//     push(top, b);
//     pop(top,get);
//
//     cout<<get<<"\n"<<isEmpty(top);

    queryContainer * testQuery = new queryContainer;
    testQuery->first = 0;
    testQuery->last = 0;
    queryAdd(testQuery, 1);
    queryAdd(testQuery, 3);

    cout<<queryGet(testQuery)<<"\n";
    cout<<queryGet(testQuery)<<"\n";
    cout<<queryGet(testQuery);

    return 0;
}
