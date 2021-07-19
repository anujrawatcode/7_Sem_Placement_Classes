#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;cin>>m>>n;
    vector<vector<int> > a[m];
    int te;
    int i,j;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>te;
            a[i].push_back(te);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][i]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    vector<vector<int> > t[m];
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t[i].push_back(a[j][i]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<t[i][i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}