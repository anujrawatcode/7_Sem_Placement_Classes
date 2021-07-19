#include<bits/stdc++.h>


using namespace std;


int main()
{
    int m,n;cin>>m>>n;
    vector<vector<int> > a[n];
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
    // We will do inplace rotation 
    // Not generalised.
    int t=a[0][0];
    a[0][0] = a[m-1][0];
    a[m-1][n-1] = a[0][m-1];
    a[0][m-1] = t;
    


    
    
    return 0;
}