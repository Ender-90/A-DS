#include "queryImplementation.hpp"

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

bool queryGet(queryContainer * &activeQuery, int & result){

    if(!queryIsEmpty(activeQuery)){

        result = activeQuery->first->data;
        queryElement * tmp = activeQuery->first;
        activeQuery->first = activeQuery->first->next;

        delete tmp;
        tmp = 0;

        return true;
    } else {

        return false;
    }
}

bool queryIsEmpty(queryContainer *activeQuery){

    return !activeQuery->first;

}
