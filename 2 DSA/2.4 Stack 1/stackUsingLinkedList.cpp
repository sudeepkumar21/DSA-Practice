using namespace std;
#include<iostream>

class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next =NULL;
        }
};

class Stack
{
    public:
    Node* topNode;
    Stack()
    {
        topNode = NULL;
    }

    void push(int d)
    {
        Node* newNode = new Node(d);
       
        newNode->next = topNode;
        topNode = newNode;

    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty, can't pop!"<<endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;

    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty, can't peek!"<<endl;
            return -1;
        }
        return topNode->data;
    }
    bool isEmpty()
    {
        return topNode == NULL;
    }

};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    while(!stack.isEmpty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }

    return 0;
}