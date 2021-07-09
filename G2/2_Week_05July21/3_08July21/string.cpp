#include <bits/stdc++.h>
using namespace std;

// Longest common prefix
// https://leetcode.com/problems/longest-common-prefix/
// hint 1: LCP( LCP ( LCP( s1, s2 )))
class Solution
{
public:
    string LCP(string a, string b)
    {
        string ans = "";

        int i = 0;
        while (i < a.length() && i < b.length())
        {
            if (a[i] == b[i])
            {
                ans = ans + a[i];
            }
            else
            {
                break;
            }
            i++;
        }
        return ans;
    }

public:
    string longestCommonPrefix(vector<string> &strs)
    {

        if (strs.size() == 1)
            return strs[0];

        string temp = LCP(strs[0], strs[1]);

        for (int i = 2; i < strs.size(); i++)
        {
            temp = LCP(temp, strs[i]);
        }
        return temp;
    }
};

// sort (not individually)
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        int r = strs.size();
        int c = strs[0].size();
        string ans = "";

        for (int i = 0; i < c; i++)
        {
            if (strs[0][i] == strs[r - 1][i])
                ans += strs[0][i];
            else
                break;
        }
        return ans;
    }
};

// vertical approach



// divide and conq approach

// Longest Common Sufix
// same as prefix ust reverse aevery string

// Longest Commom subtring