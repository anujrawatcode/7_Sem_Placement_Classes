#include <bits/stdc++.h>
using namespace std;

// Q.1 union of two sorted array hw

void union_better(int arr1[], int arr2[], int n1, int n2)
{
    // O(n1+n2) : time
    // No duplicate
    // For duplicate save in array and remove duplicate
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++];
        else if (arr1[i] > arr2[j])
            cout << arr2[j++];
        else
        {
            cout << arr1[i];
            i++;
            j++;
        }
    }
    while (i < n1)
        cout << arr1[i++];
    while (j < n2)
        cout << arr2[j++];
}

// Q.1 find the odd occuring element
// every element is even occurance only one is odd occuring find it
int odd_occur_brute(int arr[], int n)
{
    // brute count frequency if frequency of any is odd
    // space O(1)
    // Time O(n*n)
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; i++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt % 2 == 1)
        {
            cout << arr[i];
            break;
        }
    }
}

int odd_occur_better(int arr[], int n)
{
    // Space O(n)
    // Time O(n)
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto it : mp)
    {
        if (it.second % 2 == 1)
        {
            cout << it.first;
            break;
        }
    }
}

int odd_occur_optimal(int arr[], int n)
{
    // Bitwise XOR ^
    // a^a=0;
    // a^0=a;
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = ans ^ arr[i];
    cout << ans;
}

// HW
// Find the missing element. U have been given an array consist of n-1 element. All elements are unique
// given range of range 1->n,

int main()
{
    int n1 = 5, n2 = 6;
    int arr1[] = {1, 2, 5, 6, 15};
    int arr2[] = {1, 3, 4, 5, 7, 12};
}