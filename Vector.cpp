
#include "Vector.hpp"
#include <iostream>
void DynamicArray:: Push (int a)
{
    current_idx += 1;  // добавление + 1 // реального размера массива
    if(current_idx < size) // проверка размера
    {
        ar[current_idx-1] = a; //
        return;
    }
    int * numberTemp;                             ////
    numberTemp=new int [size + 1];                //// ВЫУЧИТЬ
    memcpy(numberTemp, ar, sizeof(int) * size);   ////
    numberTemp[size] = a;                         ////
    size += 1; ////
    delete[] ar;////
    ar = numberTemp;////
}
int DynamicArray:: GetR() const
{
    return * ar;
}
size_t DynamicArray::GetCapacity() const
{
    return size;
}
size_t DynamicArray::GetSize() const
{
    return current_idx;
}
int DynamicArray::Get (size_t index)
{
    if (index>=size)
    {
        return ar[0];
    }
    return ar[index];
}
DynamicArray::DynamicArray(size_t size): size(size), current_idx(0)
{
    ar = new int [size]; // выделение памяти .  ar = new int
}
bool isEmpty()
{
    return false;//доделать
}
