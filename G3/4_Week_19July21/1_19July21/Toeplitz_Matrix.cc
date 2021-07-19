// https://leetcode.com/problems/toeplitz-matrix/


#include<bits/stdc++.h>

using namespace std;


bool isToeplitzMatrix(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[i][j]!=a[i+1][j+1])
                return false;
        }    
    }
    return true;
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
    if(isToeplitzMatrix(a))
        cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    // approach
    

    return 0;
}