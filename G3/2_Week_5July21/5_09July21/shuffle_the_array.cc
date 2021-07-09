// https://leetcode.com/problems/shuffle-the-array/
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
    vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[n+i]);
        }
        for(auto x : v)
        cout<<x<<" ";
        return 0;
}