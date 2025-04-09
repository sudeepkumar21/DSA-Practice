using namespace std;
#include <iostream>

class solution
{
public:
    void swap(int arr[], int n)
    {
        int i = 0;
        int j = 4;
        while (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
};

class Array
{
public:
    int n;
    int *arr;

    Array(int n)
    {
        this->n = n;
        arr = new int[n];
    }

    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }

    void print()
    {

        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};


int main()
{
   
    Array arr(5);
    arr.input();
   
    solution ob;
    ob.swap(arr.arr,arr.n);
    arr.print();
}