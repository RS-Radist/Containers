#ifndef Stack_hpp
#define Stack_hpp
#include <stdio.h>
#include "Container.hpp"
class Stack2 : public Container
{
private:
    int stack[10];
    int size;
    int top;
public:
    Stack2();
    int GetSize();
    void Push(int x);
    int Pop(int x);
    int Peek();
    bool isEmpty();
};

#endif /* Stack_hpp */
