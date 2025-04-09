#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int data)
    {
        this->data = data;
        this->next =NULL;
        this->prev =NULL;
    }
};

int main()
{
    node* root=new node(1);
    root->prev=new node(0);
    root->next=new node(2);

    //print
    cout<<root->data;
    cout<<root->next->data;
    cout<<root->prev->data;
    return 0;
}