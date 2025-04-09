using namespace std;
#include <iostream>
#include <climits>

// maxSubarraySum
int maxSubarraySumKadanes(int arr[], int n)
{

    long long maxSum = LONG_LONG_MIN;
    long long currentSum = 0;
    for (int i = 0; i < n; i++)
    {
            currentSum += arr[i];
            maxSum = max(currentSum, maxSum);
            if(currentSum<0)
            {
                currentSum = 0;  // reset currentSum if it becomes negative.
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
    int sum = maxSubarraySumKadanes(arr, n);
    cout << "Sum of maximum subarray: " << sum << endl;

    return 0;
}