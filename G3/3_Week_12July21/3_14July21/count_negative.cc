#include<bits/stdc++.h>


using namespace std;


int main()
{
    int m,n;cin>>m>>n;
    vector<int> a;
    int t;
    int i,j;
    int counter=0;
    //Brute force
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>t;
            a.push_back(t);
            if(t<0)
            counter++;
        }
    }
    cout<<counter<<endl;

    // We could use binary search for this question.
    // if a[mid] < 0 then go to left, else go to right.
    int c=0;
    for(i=0;i<m;i++)
    {
        

    }


}