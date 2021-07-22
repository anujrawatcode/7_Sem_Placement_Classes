#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Array container in stl.
    array<int,10> arr; // Garbage value is stored
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //fill would fill the whole array with 0
    arr.fill(0);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    // stack - stack<int> s

    return 0;
}