//https://leetcode.com/problems/height-checker/
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
    // Brute force , nlogn
    vector<int> temp(a.begin(),a.end());
    sort(temp.begin(),temp.end());
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=temp[i])
        c++;
    }
    cout<<c<<endl;


    //Optimized one , we can use the counting sort or count array.
    vector<int> count(101,0);
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    int j=0;
    int i=1;
    while(i<n && )

}