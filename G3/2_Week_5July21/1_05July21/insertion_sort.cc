#include<iostream>
#include<vector>
using namespace std;

void Insertion(vector<int> &a)
{
    int n = a.size();
    int t,j;
    for(int i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 and a[j]>t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    // Calling Insertion sort
    Insertion(a);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    // We use sort in C++.
    //We can also use qsort in C , it uses quick sort.
    // In Java we use Arrays.sort() , I don't know Java :).

    return 0;
}