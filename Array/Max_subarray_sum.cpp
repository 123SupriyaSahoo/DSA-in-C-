#include <iostream>
#include <limits.h>
using namespace std;
  
int max_subarray(int arr[], int n)
{
    int maxsum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currsum = 0;
        for (int end = start; end < n; end++)
        {
            currsum += arr[end];
            maxsum = max(maxsum, currsum);
        }
        return maxsum;
    }
}
int main()
{
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    int arr[n];
    cout << "Elements are:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum subarray sum is:" << max_subarray(arr, n);
}