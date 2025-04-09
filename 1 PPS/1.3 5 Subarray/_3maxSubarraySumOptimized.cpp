using namespace std;
#include <iostream>
#include <climits>

// maxSubarraySum
int maxSubarraySumOptimized(int arr[], int n)
{

    long long maxSum = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        long long currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            maxSum = max(currentSum, maxSum);
        }
       
    }
    return maxSum;
}

// main function
int main()
{
    // print all subarrays
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = maxSubarraySumOptimized(arr, n);
    cout << "Sum of maximum subarray: " << sum << endl;

    return 0;
}