using namespace std;
#include <iostream>

//create node which contains data int and a pointer which points to next node
class Node
{
    public:
      int data;
      Node* next;

      //constructor
      Node(int d)
      {
        this->data = d;
        this->next = NULL;
      }
};

class List
{
    public:
     Node* head;
     Node* tail;

     List()
     {
        head = NULL;
        tail = NULL;
     }
     //add node at the end of the list
     void push_back(int d)
     {
        Node* newNode = new Node(d);
        if(head == NULL)
        {
            head =tail= newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;

        }

     }

     void push_front(int d)
     {
         Node* newNode = new Node(d);
         if(head == NULL)
         {
             head = tail= newNode;
         }
         else
         {
             newNode->next = head;
             head = newNode;
         }
     }

     void print()
     {
         Node *temp = head;
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

    List list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_front(0);
    list.push_front(5);
    list.print();







    // Node* head=new Node(1);
    //     head->next=new Node(2);
    //     head->next->next=new Node(3);

    //     //print
    //     Node* temp = head;
    //     while(temp!= NULL)
    //     {
    //         cout << temp->data << " ";
    //         temp = temp->next;
    //     }



    
    
    
    return 0;
}