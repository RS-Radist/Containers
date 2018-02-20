
#include <iostream>
#include "Stack.hpp"
#include "Container.hpp"
Stack2::Stack2() : top(0),size(0)
{}
int Stack2::Pop(int x)
{
    size--;
    if (0==x)
    {
        top=stack[size-1];
        return stack[size];
    }
    top=stack[size-1];
    return stack[size];
}
int Stack2::Peek()
{
    if (size==0)
    {
        std::cout<< "Вершины нет";
        return -1;
    }
    return this->top;
}
bool Stack2::isEmpty()
{
    if (size==0)
    {
        std::cout<<"Стек пустой";
        return false;
    }
    else
        std::cout<<"Стек полный";
    return true;
}
void Stack2::Push(int x)
{
    if (size<10)
    {
        stack[size] = x;
        top=stack[size];
        size++;
    }
    else
    {
        
        std::cout << "Stack overflow!\n";
    }
}
int Stack2::GetSize()
{
    return size;
}

