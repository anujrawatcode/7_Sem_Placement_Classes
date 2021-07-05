#include <bits/stdc++.h>
using namespace std;

// Q.2 create target array in given order H.W
// https://leetcode.com/problems/create-target-array-in-the-given-order/

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    //  O(n) space for ans;
    //  O(n*n) time
    int n = nums.size();
    vector<int> target(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (target[index[i]] == -1)
            target[index[i]] = nums[i];
        else
        {
            int idx = index[i];
            target.insert(target.begin() + idx, nums[i]);
        }
    }
    target.resize(n);
    return target;
}

// same as above short
vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{

    vector<int> answer;

    for (int i = 0; i != nums.size(); i++)
        answer.insert(answer.begin() + index[i], nums[i]);

    return answer;
}