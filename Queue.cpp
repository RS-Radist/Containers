#include "Queue.hpp"
Queue:: Queue():size(0)
{}
void Queue:: Push(int x)
{
    if (size==0){
        arr[0]=x;
        size++;
    }
    else
    {
        int temp[size];
        int k=1;
        for (int i=0;i<size;++i)
        {
            temp[k]=arr[i];
            k++;
        }
        temp[0]=x;
        for (int i=0;i<size+1;++i)
        {
            arr[i]=temp[i];
        }
        size++;
    }
}

void Queue:: Pop()
{
    if (size==0)
    {
        cout<<"Очередь пустая";
        return;
    }
    int temp[size-1];
    int k=0;
    for (int i=0;i<size;++i)
    {
        temp[k]=arr[i+1];
        k++;
    }
    size--;
    for (int i=0;i<size;++i)
    {
        arr[i]=temp[i];
    }
}
int Queue:: ClearQueue()
{
    for (int i =0;i<size;++i)
    {
        arr[i]=0;
    }
    return 0;
}
bool isEmpty() //сделать
{
    return false;
}

