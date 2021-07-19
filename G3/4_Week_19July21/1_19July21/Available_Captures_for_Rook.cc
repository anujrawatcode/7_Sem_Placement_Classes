// https://leetcode.com/problems/available-captures-for-rook/

#include<bits/stdc++.h>
using namespace std;
int numRookCaptures(vector<vector<char>>& a) 
{
    int rr=-1,rc=-1;
    bool Found_rook = false;
    int m=8,n=8;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='R')
            {
                rr=i;
                rc=j;
                Found_rook = true;
                break;
            }
        }
        if(Found_rook)
        break;
    }
    // Rest next day






}




int main()
{
    int m=8,n=8;
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
    
    // approach
    cout<<numRookCaptures(a);

    return 0;
}