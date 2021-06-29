//Dynamic Memory allocation
// int *p = (int*)malloc(5*sizeof(int));
// A[i] = *(A+i)

// Pointer aritmemtaic

// Address of ith element of array
// int A[3] = {5, 10, 15};
// address of A[i] where i=2
// Ma + i * sizeof(int) where Ma is memory address of starting element

// Q.1 removing duplicate from an sorted array space O(1), time O(n)
// 1.Brute > 2.Better > 3.Optimal

#include <bits/stdc++.h>
using namespace std;

void remove_Brute(int arr[], int n)
{
    // Method 1: (Using extra space)
    //brute
    // compare ith element and i+1 element
    // if same do nothing
    // else copy it to temp array

    if (n == 0 || n == 1)
        return;
    int k = 0;
    int i = 0;
    int temp[n];
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[k] = arr[i];
            k++;
        }
    }

    temp[k] = arr[n - 1]; //temp[k++]
    k++;

    for (int i = 0; i < k; i++)
        cout << temp[i] << " ";
}

//Home work  remove duplicate elements from a sorted array without using extra space time o(n)
void remove_better(int arr[], int n)
{
    //space O(1), time O(n)
    if (n == 0 || n == 1)
        return;
    int k = 0;
    int i = 0;

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }

    arr[k] = arr[n - 1]; //temp[k++]
    k++;

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
}

//Q2 Intersection of two sorted arrays , if duplicate , brute>better>optimal

int main()
{
    int n = 9;
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    remove_better(arr, n);

    //  Itersecion left
}
