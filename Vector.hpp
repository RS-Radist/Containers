
#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>
#include "Container.hpp"
class DynamicArray:public Container
{
private:
    size_t size;   // размер массива динам. памяти
    size_t current_idx; // реальный размер массива
    int * ar; // массив
public:
    DynamicArray(size_t size=0);
    int Get (size_t index);
    void Push (int a);
    size_t GetSize() const;
    size_t GetCapacity() const;
    int GetR() const;
    bool isEmpty();//сделать
};



#endif /* Vector_hpp */
