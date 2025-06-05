//repo name : stackUsingLinkedList_4nimbelakang
//commit minimal 20
#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class Node
{
    public : 
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }  
};

//stack class 
class Stack
{
    private:
        node *top; //pointer to the top node of the stack
}