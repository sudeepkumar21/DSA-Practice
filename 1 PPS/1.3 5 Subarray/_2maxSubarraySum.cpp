using namespace std;
#include <iostream>
#include <climits>

//maxSubarraySum
int maxSubarraySum(int arr[], int n)
{
    long long maxSum =LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            long long currentSum = 0;
           
            for (int k = i; k <= j; k++)
            {

                currentSum += arr[k];
               
            }
            // if (currentSum > maxSum)
            // {
            //     maxSum = currentSum;
            // }
            maxSum=max(currentSum, maxSum);
           
           
        }
        // newline for next subarray
        
    }
    return maxSum;
}
// main function
int main()
{
    // print all subarrays
    int arr[] = {1, 2, 3, 4,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=maxSubarraySum(arr,n);
    cout<<"Sum of maximum subarray: "<<sum<<endl;
  
    return 0;
}