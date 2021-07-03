#include<iostream>
#include<vector>
using namespace std;


vector<int> Gen_Target_Brute(vector<int> index,vector<int> nums)
{
    //Intializing the array with -1
    vector<int> target(nums.size(),-1);
    int n = index.size();
    for(int i=0;i<n;i++)
    {
        if(target[index[i]]==-1)
        {
            target[index[i]] = nums[i];
        }
        else
        {
            int k = 0;
            int l = index[i]; 
            while(target[l] != -1)
            {
                k++;
                l++;
            }
            l=index[i];
            int j=l+k;
            while(j>l)
            {
                target[j]=target[j-1];
                j--;
            }
            target[index[i]] = nums[i];
        }

    }
    return target;

}


int main()
{
    int n;
    cin>>n;
    vector<int> index;
    int t;
    //Input index array
    for(int i=0;i<n;i++)
    {
        cin>>t;
        index.push_back(t);
    }
    vector<int> nums;
    //Input nums array
    for(int i=0;i<n;i++)
    {
        cin>>t;
        nums.push_back(t);
    }
    // Creating target array.
    vector<int> target = Gen_Target_Brute(index,nums);
    for(auto x:target)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}