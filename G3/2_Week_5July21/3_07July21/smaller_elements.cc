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
    // Use sorting , hashmap and .
    // We can also use count array.
    vector<int>count(101,0);
    for(int i=0;i<n;i++)
        count[a[i]] = count[a[i]]+1;
    vector<int> ans;
    
    for(int i=0;i<n;i++)
    {
        int c=0;
        // This is O(1) as a[i] max can be 100 only
        for(int j=0;j<a[i];j++)
        {
            c+=count[j];
        }
        ans.push_back(c);
    }
    //  Overall time & space complexity complexity is O(n) and
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}