#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main()
{
    vector<string> result;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)//loop for word
    {
        int temp = arr[tolower(s[i][0])-97];
        int flag=0;
        for(j=1;j<s[i].size();j++)//length of each word
        {
            if(temp!= arr[tolower(s[][j])-97])
                {
                    flag = 1;
                    break;
                }
        
        if(flag==0)
        result.push_back(str[i]);
        }
    }
    for(auto x:result)
    cout<<x;

    return 0;
}