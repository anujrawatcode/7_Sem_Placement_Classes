// Array : collection of same type of element at contiguous memory location
// indexing 0 -> n-1
// Adv : Random access of element, faster access using indexs/position
// Dis : Fixed size

// Declaration
// data_type array_name[no_of_array];
//  int arr[n];

// int n=10;
// int arr[n];

// asked in MCQ
// Initializeing an Array
// int arr[] = {5, 10, 15, 20, 25}
// compiler auto declare an array of size of {} and assign

// int arr[4]={10, 20, 30, 40}

// Dynamic memory allocation for array
// int *p = (int *)malloc(5 * sizeof(int));
// sizeof is operator
// malloc() reserve memory block return pointer to starting pointer
// why type-cast is done in dynamically allocated memory ?
// malloc return void type address type-cast into int* pointer
// If malloc can't allocate continous memory it return null

// Home-Work
// program to insert, delete, search
// sum of element of array

#include <bits/stdc++.h>
using namespace std;

//sum of element in array
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

// delete element from array return true if element is deleted and false if not
bool delete(int arr[], int n, int x)
{
    if (n == 0)
        return false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            for (int j = i + 1; j < n; j++)
            {
                arr[j - 1] = arr[j];
            }
            n--;
            return true;
        }
    }
    return false;
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    bool a = delete(arr, n, 3);

}