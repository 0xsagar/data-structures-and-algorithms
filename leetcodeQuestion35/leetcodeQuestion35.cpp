#include <bits/stdc++.h>
using namespace std;

int searchInsert(int arr[], int n, int target)
{
    int start = 0;
    int end = n;
    int mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end - 1)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            return ans;
        }
        if (arr[mid] > target)
        {
            ans = mid;
            end = mid;
        }
        else
        {
            start = mid + 1;
            ans = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 4, 5, 7};
    cout << searchInsert(arr, 5, 2);
}