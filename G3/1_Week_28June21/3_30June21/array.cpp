#include <bits/stdc++.h>
using namespace std;

// intersection of two sorted array

void inter_brute(int arr1[], int n1, int arr2[], int n2)
{
    // O(n*m) using 2 loops

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i];
            }
        }
    }
}

void inter_better(int arr1[], int n1, int arr2[], int n2)
{
    // O(n + m)
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
            j++;
        else
            i++;
    }
}

//union of two sorted array hw
int main()
{
    int n1 = 5, n2 = 6;
    int arr1[] = {1, 2, 5, 6, 15};
    int arr2[] = {1, 3, 4, 5, 7, 12};
}