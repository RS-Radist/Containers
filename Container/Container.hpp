#ifndef Container_hpp
#define Container_hpp
#include <stdio.h>

class Container
{
protected:
    struct Node
    {
        int value;
        Node* next;
    };
    Node*head;
    Node*tail;
    int size;
    int arr[10];
    int end,begin;
public:
    Container();
    void Push(int x);
    void Pop();
    void SortStruct();
    bool isEmpty();
};
#endif
