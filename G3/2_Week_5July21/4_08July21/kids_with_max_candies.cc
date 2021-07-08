// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

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
    int extraCandies;
    cin>>extraCandies;
     vector<bool> ans;
        int max = a[0];
        int n = a.size();
        for(int i=1;i<n;i++)
        {
            if(a[i]>max)
                max = a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(extraCandies+a[i]>=max)
            {
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";

return 0;

}