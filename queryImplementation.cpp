#include "queryImplementation.hpp"
#include <iostream>

// Query operations

void queryAdd(queryContainer * &activeQuery, int x){

    queryElement * tmp = new queryElement;

    tmp->data = x;
    tmp->next = 0;

    if(activeQuery->first){

        activeQuery->last->next = tmp;
        activeQuery->last = tmp;

    } else {
        activeQuery->first = activeQuery->last = tmp;
    }
}

int queryGet(queryContainer * &activeQuery){

    if(!queryIsEmpty(activeQuery)){

        int result = activeQuery->first->data;
        queryElement * tmp = activeQuery->first;
        activeQuery->first = activeQuery->first->next;

        delete tmp;
        tmp = 0;

        return result;
    } else {

        std::cout<<"\n"<<"Query is empty! ";
        return 0;
    }
}

bool queryIsEmpty(queryContainer *activeQuery){

    return !activeQuery->first;

}
