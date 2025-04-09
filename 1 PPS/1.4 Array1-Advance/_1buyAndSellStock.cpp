using namespace std;
#include<iostream>

//Buy and sell stock
int BuyAndSellStock(int arr[], int n)
{

}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxProfit = BuyAndSellStock(arr, n);
    cout << "Maximum profit is: " << maxProfit << endl;


    return 0;
}