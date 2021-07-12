#include<iostream>
#include<vector>
#include<algorithm>
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
    if(n%2==0)
    {
        sort(a.begin(),a.begin()+(n/2));
        sort(a.begin()+(n/2)+1,a.end(),greater<int>());
    }
    else
    {
        sort(a.begin(),a.begin()+((n-1/2)));
        sort(a.begin()+((n-1)/2)+1,a.end(),greater<int>());
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

