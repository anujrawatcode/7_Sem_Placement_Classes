#include <bits/stdc++.h>
using namespace std;
// HW
// Find the missing element. U have been given an array consist of n-1 element. All elements are unique
// given range of range 1->n,

int missing_brute(int arr[], int n)
{
    // Hashing
    // space O(n)
    // Time O(n)
    int count[n + 1] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    int ans = 0;
    for (int i = 1; i <= n + 1; i++)
        if (count[i] == 0)
            ans = i;
    return ans;
}
int missing_better(int arr[], int n)
{
    // Space : O(1)
    // Time : O(n)
    //sum of range - sum of given
    int sum1 = n * (n + 1) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
        sum2 += arr[i];
    return sum1 - sum2;
}

// Q.1 Running sum of array
// arr { 1 2 3 4 5 }
// pre { 1 3 6 10 15 }

void running_sum(int arr[], int n)
{
    // prefix sum
    int sum[n] = {0};
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        sum[i] = arr[i] + sum[i - 1];

    for (int i = 0; i < n; i++)
        cout << sum[i] << " ";
}

// Q.2 create target array in given order H.W
// https://leetcode.com/problems/create-target-array-in-the-given-order/
int main()
{
    int n = 6;
    int arr[n - 1] = {1, 2, 5, 6, 3}; //4 missing
    cout << missing_brute(arr, n);
}