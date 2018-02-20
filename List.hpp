#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <iostream>
#include "Container.hpp"
using namespace std;
class List:public Container
{
public:
    List();
    ~List();
    void Push(int x);
    void Show ();
    bool isEmpty();//сделать
};


#endif /* List_hpp */
