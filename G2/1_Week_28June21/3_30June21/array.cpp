// extra toffes

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int e)
{
    int max = 0;
    int maxIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (e + arr[i] > max)
        {
            maxIdx = i;
            max = e + arr[i];
        }
    }
    vector<bool> vec(n, true);
    vec[maxIdx] = false;
}

int solve1(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                cnt++;
    return cnt;
}

int solve1_better(int arr[], int n)
{

    
}