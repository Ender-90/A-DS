#ifndef _stack_implement_H_
#define _stack_implement_H_

struct stack_element;

void push(stack_element * &top, int co);
bool pop(stack_element * &top, int & co);
int topEle(stack_element * top);
bool isEmpty(stack_element * top);

#endif // _stack_implement_H_
