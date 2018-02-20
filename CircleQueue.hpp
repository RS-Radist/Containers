#ifndef CircleQueue_hpp
#define CircleQueue_hpp
#include <stdio.h>
#include <iostream>
#include "Container.hpp"

using namespace std;
class CircleQueue : public Container
{
private:
    int size;
    int arr[10];
    int end,begin;
public:
    CircleQueue();
    bool Push(int x);
    void Pop();
    int GetSize();
    bool isEmpty();//сделать
};

#endif /* CircleQueue_hpp */
