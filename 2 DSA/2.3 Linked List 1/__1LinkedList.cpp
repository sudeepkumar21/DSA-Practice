using namespace std;
#include <iostream>

class node
{
    public:
    int data;
    node* next;
    public:
    //constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class list
{
    
    node* head;
    node* tail;

    public:
    list()
    {
        this->head =NULL;
        this->tail =NULL;
    }

    void pushFront(int val)
    {
        node* newNode=new node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            newNode->next = head;
            head= newNode;

        }
    }

    void pushBack(int val)
    {
        node* newNode=new node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            tail->next = newNode;
            tail= newNode;
        }
    }

    void insert(int val,int pos)
    {
        node* newNode=new node(val);
        node* temp=head;
        for(int i=0;i<pos-1;i++)
        {
            if(temp==NULL)
            {
                cout << "Invalid position" << endl;
                return;
            }
            temp=temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }
    
    void remove(int pos)
    {
        node* temp=head;
        for(int i=0; i<pos; i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;

    }

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main()
{
    list ll;
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.print(); // output: 1 2 3
    
    ll.pushBack(4);
    ll.pushBack(5);
    ll.print(); // output: 1 2 3 4 5
    
    ll.insert(6, 3);
    ll.print(); // output: 1 2 3 6 4 5
    
    ll.remove(3);
    ll.print(); // output: 1 2 4 6 5
    
    return 0;
}