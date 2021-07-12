// s = "loveleetcode"
// c = "e"
// Find the shortest distance of each character.
// e at 3,5,6,11. , lat 0 is at a distance of abs(0-3) = 3
// l at 4 has both values 1 from nearest 'e'.

#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main()
{
    vector<int> ic;
    string s1;
    getline(cin,s1);
    string s2;
    cin>>s2;
    //indices of c letters 
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2)
        ic.oush_back(i);
    }
    // If position is of c then dist=0
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2)
        result[i] = 0;
        else{
            //distance of current letter with every position of c letter
            for(int j=0;j<ic.size();i++)
            {
                dist[j] = abs(ic[j]-i);
            }
            int min = dist[0];
            for(int j=1;j<dist.length();j++)
            {
                if(dist[j]<min)
                min= dist[j];
            }
            result[i]=min;
        }

    }

    return 0;
}

// T.C = O(n+n*n)
// S.c = O(n+m) 
