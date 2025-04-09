#include<iostream>
using namespace std;

//Sum of product of all pairs of array element
//input->1,3,4  pair->1,3    3,4    1,4  
//3+12+4=19
int sum(int arr[],int n)
{
    int totalSum = 0;
    for(int i=0;i<n-1;i++)
    {
       
        for(int j=i+1;j<n;j++)
        {
            totalSum += arr[i] * arr[j];
        }


    }
    return totalSum;

}

int main()
{
    int arr[]={1,3,4};
    int n=sizeof(arr)/sizeof(int);
    int x=sum(arr,n);
    cout<<x;
    return 0;
}