#include "CircleQueue.hpp"
CircleQueue::CircleQueue():size(0){}
bool CircleQueue:: Push(int x)
{
    if (size==10)
    {
        cout<<"Over ";
        return false;
    }
    if (size==0)
    {
        arr[0]=x;
        size++;
        return true;
    }
    else
    {
        int temp[size+1];
        temp[0]=x;
        int k=1;
        for (int i=0;i<size;++i)
        {
            
            temp[k]=arr[i];
            k++;
        }
        for (int i=0;i<size+1;++i)
        {
            
            arr[i]=temp[i];
        }
        size++;
        return true;
    }
    
}
void CircleQueue:: Pop()
{
    if (size==0)
    {
        cout<<"Очередь пустая";
    }
    
    int temp=arr[0];
    int tempMas;
    for (int i=0;i<size;++i)
    {
        tempMas=arr[i+1];
        arr[i]=tempMas;
    }
    arr[size-1]=temp;
}
int CircleQueue:: GetSize()
{
    return size;
}
bool isEmpty()
{
    return false;//сделать
}