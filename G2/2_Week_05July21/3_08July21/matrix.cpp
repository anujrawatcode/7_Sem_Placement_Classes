#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
// mat1 =
// 1 0
// 0 1

// mat2 =
// 0 1
// 1 0

// if mat1 can be transformed into mat2 by rotating it 90 degree k times ( true or false )
// mat is square
// if true return k

class Solution
{

    void rotate(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();

        // Transpose
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i > j)
                    continue;
                else
                    swap(matrix[i][j], matrix[j][i]);
            }
        }
        //mirror from between
        // int m=c/2;
        for (int i = 0; i < r; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

public:
    bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
    {
        if (mat == target)
            return true;

        for (int times = 1; times <= 3; times++)
        {
            rotate(mat);
            if (mat == target)
                return true;
        }
        return false;
    }
};
