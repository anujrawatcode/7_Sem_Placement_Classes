#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/missing-number/

// https://leetcode.com/problems/counting-bits/
vector<int> countBits(int n)
{
    vector<int> vec(n + 1);
    for (int i = 0; i <= n; i++)
    {
        int temp = i;
        int cnt = 0;
        while (temp)
        {
            temp = temp & (temp - 1);
            cnt++;
        }
        vec[i] = cnt;
    }
    return vec;
}



// https://leetcode.com/problems/power-of-four/


// https://leetcode.com/problems/binary-watch/
