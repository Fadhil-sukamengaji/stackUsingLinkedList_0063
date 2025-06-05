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
        Node *top; //pointer to the top node of the stack

    public:
        Stack()
        {
            top = NULL; //initialize the stacl with a null top
        }

        //push operation: insert an element onto the topof the
        int push(int value)
        {
            Node *newNode = new Node();  
            newNode->data = value;
            newNode->next = top;
            top = newNode;
            cout << "push value: " << value << endl;
            return value;
        }

    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "stack is empty." << endl;
            return;
        }

        cout << "popped value: " << temp->data << endl;
        top = temp->next;
        delete temp;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "list is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack stack;
    
    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. exit\n";
        