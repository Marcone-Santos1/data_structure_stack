#include <iostream>
#include "stack.h"

using namespace std;

stack::stack()
{
    length = 0;
    vec = new T[MAX_ITENS];
}

stack::~stack()
{
    delete [] vec;
}

bool stack::isfull()
{
    return (length == MAX_ITENS);
}

bool stack::isempty()
{
    return (length == 0);
}

void stack::push(T item)
{
    if (this->isfull()) {
        cout << "\nThe stack is full. It's not possible to add this element in stack\n";
        return;
    }

    vec[length] = item;
    length++;
}

T stack::pop()
{

    if (this->isempty()) {
        cout << "\nThe stack is empty. It's not possible to pop any element\n";
        return 0;
    }

    length--;
    return vec[length];
}

void stack::print()
{
    cout << "stack: [";
    for (int i = 0; i < length; i++) {
        cout << vec[i] << " | ";
    }
    cout << "]\n";

}

int stack::lengthvec()
{
    return length;
}
