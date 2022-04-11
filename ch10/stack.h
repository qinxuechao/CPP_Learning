//
// Created by Xuechao Qin on 4/11/2022.
//

#ifndef CPP_LEARNING_STACK_H
#define CPP_LEARNING_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {
        MAX = 10
    };    // constant specific to class
    Item items[MAX]{};     // holds stack items
    int top;        // index for top stack item
public:
    Stack();

    bool isempty() const;

    bool isfull() const;

    // push() returns false if stack already is full, true others wise
    bool push(const Item &item);    // add item to stack

    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item &item);           // pop top into item
};


#endif //CPP_LEARNING_STACK_H
