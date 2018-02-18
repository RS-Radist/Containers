

#ifndef Container_hpp
#define Container_hpp

#include <stdio.h>

class Container // создаине класс
{
protected:// защищеный
    struct Node
    {
        int value; // значение элемента списка
        Node* next;// след. нода
    };
    Node*head;
    Node*tail;
    int size;
    int arr[10];
    int end,begin;  //создание массива
public:
    Container()
    {}
    void Push(int x);
    void Pop();
    void End();
    void Begin();
    int ClearQueue();
};
#endif /* Container_hpp */
