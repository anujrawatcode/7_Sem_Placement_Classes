#include<iostream>
#include<vector>
using namespace std;


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
    //Brute-force
    int count=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]<a[i])
            count++;
        }
        v.push_back(count);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Elements smaller than : "<<a[i]<<" are : "<<v[i]<<endl;
    }

    return 0;
}