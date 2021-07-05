#include<iostream>
#include<vector>

using namespace std;


int BinSearch(vector<int> a,int left,int right , int key)
{
    if(right>=left)
    {
        int mid = left + (right-left)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            return BinSearch(a,left,mid-1,key);
        } 
        else
        {
            return BinSearch(a,mid+1,right,key);
        }            
   }
   return -1;
}

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
    int key;
    cout<<"Enter the element to be searched";
    cin>>key;
    int k = BinSearch(a,0,n-1,key);
    if(k!=-1)
    cout<<key<<" Found at : "<<k<<endl;
    else
    cout<<key<<" doesnot exist."<<endl;
    return 0;
}