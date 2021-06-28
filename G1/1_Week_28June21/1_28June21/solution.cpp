class Solution
{
public:
    void fill(vector<vector<int>> &ncr, int mod)
    {
        for (int i = 0; i < 1001; i++)
        {
            ncr[i][0] = 1;
            ncr[i][1] = i;
            ncr[i][i] = 1;
        }
        for (int i = 3; i < 1001; i++)
        {
            for (int j = 2; j < i; j++)
            {
                ncr[i][j] = (ncr[i - 1][j] % mod + ncr[i - 1][j - 1] % mod) % mod;
            }
        }
    }

    int validcount(vector<int> &nums, vector<vector<int>> &ncr, int mod)
    {
        vector<int> l, r;
        int s = nums.size();
        if (s == 0 || s == 1)
            return 1;
        for (int i = 1; i < s; i++)
        {
            nums[i] < nums[0] ? l.push_back(nums[i]) : r.push_back(nums[i]);
        }
        int m = l.size(), n = r.size();
        long long lc = validcount(l, ncr, mod) % mod, rc = validcount(r, ncr, mod) % mod;
        return ((ncr[m + n][n] * lc) % mod * rc) % mod;
    }

    int numOfWays(vector<int> &nums)
    {
        int mod = 1000000007;
        vector<vector<int>> ncr(1001, vector<int>(1001));
        fill(ncr, mod);
        return validcount(nums, ncr, mod) - 1;
    }
};