#ifndef Queue_hpp
#define Queue_hpp
#include <stdio.h>
#include <iostream>
#include "Container.hpp"
using namespace std;
class Queue : public Container
{
private:
    int size;
    int arr[10];
    int end,begin;
public:
    Queue();
    void Push(int x);
    void Pop();
    int ClearQueue();
    bool isEmpty();
    
};


#endif /* Queue_hpp */
