#include <bits/stdc++.h>
using namespace std;
// NUmber system

// radix
// Binary
// octal
// decimal     10
// hexa deci   16

// C0nverting any base to decimal
// Q.1 To convert any base to decimal
// Q.2 from deciaml to any base
// https://www.geeksforgeeks.org/convert-base-decimal-vice-versa/

// Q.3 No in to 1's Comp
// Q.4 No in to 2's Comp
// uint32_t
// getting last set bit

// Given an array of integer in which every element
// appears twice except for 1 element find that single element
// https://leetcode.com/problems/single-number/
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
        ans = ans ^ nums[i];
    return ans;
}

// count number of one in binary number given in uint32_t form
// https://leetcode.com/problems/number-of-1-bits/
int hammingWeight(uint32_t n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n & (n - 1);
    }
    return cnt;
}

// given a number n return if it is in power of 2
bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}
