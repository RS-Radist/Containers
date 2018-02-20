#include "List.hpp"
#include "Container.hpp"
#include <iostream>
using namespace std;

List::List()
{
    head=NULL;
}
List::~List()
{
}
void List:: Push(int x)
{
    Node *temp=new Node;
    temp->value=x;
    temp->next=head;//
    head=temp;
}
void List:: Show ()
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}