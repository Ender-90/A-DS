#pragma once

struct stack_element;

void push(stack_element * &top, int co);
bool pop(stack_element * &top, int & co);
int topEle(stack_element * top);
bool isEmpty(stack_element * top);
