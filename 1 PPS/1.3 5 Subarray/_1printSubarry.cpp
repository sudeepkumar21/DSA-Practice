using namespace std;
#include <iostream>

// maxSubarraySum
void printAllSubarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << ",";
        }
        cout << endl; // newline for next subarray
    }
}
// main function
int main()
{
    // print all subarrays
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printAllSubarray(arr, n);

    return 0;
}