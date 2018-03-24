#pragma once

// Query structures:
// - container for keep start and end pointers of query
// - query element

struct queryElement {

    int data;
    queryElement * next;
};


struct queryContainer {

    queryElement * first;
    queryElement * last;
};


void queryAdd(queryContainer * &activeQuery, int x);
int queryGet(queryContainer * &activeQuery);
bool queryIsEmpty(queryContainer *activeQuery);
