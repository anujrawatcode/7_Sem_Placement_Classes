// 

#include<bits/stdc++.h>
using namespace std;

// Brute force method
vector<vector<int>>reshapeBF(vector<vector<int>>& a, int r, int c) 
{
    int m=a.size();
    int n=a[0].size();
    if(m*n != r*c)
        return a;
    else
    {
        
        int k=0;
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp.push_back(a[i][j]);

            }
        }
        for(int i=0;i<r;i++)
        {
            vector<int> t;
            for(int j=0;j<c;j++)
            {
                t.push_back(a[i][j]);
            }
            ans.push_back(t);
        }

    }
    return ans;
}

// Optimized One
vector<vector<int>> rehapeOPT(vector<vector<int>>& a, int r, int c) 
{
    int m=a.size();
    int n=a[0].size();
    if(m*n != r*c)
        return a;
    else
    {
        
        int k=0;
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<m*n;i++)
        {
            ans[i/r][i%c] = a[i/n][i%n];
        }
        for(int i=0;i<r;i++)
        {
            vector<int> t;
            for(int j=0;j<c;j++)
            {
                t.push_back(a[i][j]);
            }
            ans.push_back(t);
        }

    }
    return ans;
}




int main()
{
    int m,n;cin>>m>>n;
    vector<vector<int>> a;
    for(int i=0;i<m;i++)
    {
        vector<int> temp;
        int t;
        for(int j=0;j<n;j++)
        {
            cin>>t;
            temp.push_back(t);
        }
        a.push_back(temp);
    }
    int r,c;cin>>r>>c;

    vector<vector<int>> ans = reshapeBF(a,r,c);
    //optimized one
    vector<vector<int>> ans = reshapeOPT(a,r,c);

    return 0;
}
