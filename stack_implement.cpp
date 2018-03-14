
// Stack element

struct stack_element {
    int data;
    stack_element * next;
};

// Stack operations

void push(stack_element * &top, int co){
    stack_element * tmp = new stack_element;
    tmp -> data = co;
    tmp -> next = top;
    top = tmp;
}

bool pop(stack_element * &top, int & co){
if(top){
    stack_element* tmp = top;
    co = top -> data;
    top = top -> next;
    delete tmp;
    tmp = 0;
    return true;
} else {
    return false;
}
}

int topEle(stack_element * top){
    if(top){
    return top->data;
    }
}

bool isEmpty(stack_element * top){
    return !top;
}
