using namespace std;
#include <iostream>
#include <vector>

template<class T>
class Stack
{
    public:
    vector<T> vec;

    void push(T value)
    {
        vec.push_back(value);
    }
    
    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        vec.pop_back();

    }
    
    T top()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return vec[vec.size()-1];

    }

    bool isEmpty()
    {
        return vec.size() == 0;
    }

   
     
};

int main()
{
    Stack<char> stack;
    stack.push('a');
    stack.push('b');
    stack.push('c');
    while(!stack.isEmpty())
    {
        cout << "Top element: " << stack.top() << endl;
        stack.pop();
    }
    cout<<stack.top();

    return 0;
}