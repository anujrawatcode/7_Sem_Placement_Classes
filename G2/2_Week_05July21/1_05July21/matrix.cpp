#include <bits/stdc++.h>
using namespace std;

// Q.1 Matrix of Rotation

// Q.2 Island Problem
// 1 = person
// 0 = empty

// 1 1 1
// 1 1 0
// 1 0 1
// Given i,j person position it can infect U,B,L,R
// Digonal will not affect

// 2 2 2
// 2 2 0
// 2 0 1

// solve(matrix, r, c, i, j, infected)
// {
//     if (i < 0 || j < 0 || i > n - 1 || j > m - 1 || matrix[i][j] == 0)
//         return;
//     if (matrix[i][j] == 1)
//     {
//         infected[i][j] = true;
//         solve(matrix, r + 1, c, i, j, infected);
//         solve(matrix, r, c + 1, i, j, infected);
//         solve(matrix, r - 1, c, i, j, infected);
//         solve(matrix, r, c - 1, i, j, infected);
//     }
// }

// Q.3 m n matrix  special matrix if all possible diagonal
// from top-left to bottom right right are having same element
// if all forward diaoganl is same

//      solve(mat, 0, 0, r, c);
// bool solve(mat, i, j, r, c)
// {
//     if (i == r - 1 || j == c - 1)
//         return true;
//     if (mat[i][j] != mat[i + 1][j + 1])
//         return false;
//     else
//     {
//         return solve(mat, i + 1, j, r, c) ||
//                solve(mat, i, j + 1, r, c) ||
//                sove(mat, i + 1, j + 1, r, c);
//     }
// }

// bool(matrix, n, m)
// {
//     for (int i = ; i < mat.length; i++)
//     {
//         for (int j = 0; mat[0].length; j++)
//         {
//             if (i > 0 && j > 0 && mat[i - 1][j - 1])
//         }
//     }
// }

// Q.4 Square matrix of size n*n
// 2 task
// reverse every row
// flip the number

// 1 1 0
// 1 0 1
// 0 0 0

// 0 1 1
// 1 0 1
// 0 0 0

// 1 0 0
// 0 1 0
// 1 1 1

// flip by xor

// solve(mat, n, m)
// {
//     for (int i = 0; i < n; i++)
//         reverse(mat[i].begin().mat[i].end());

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (mat[i][j] == 1)
//                 mat[i][j] = 0;
//             else
//                 mat[i][j] = 1;
//         }
//     }
// }

// Home work Ques:
// https://leetcode.com/problems/projection-area-of-3d-shapes
// https://leetcode.com/problems/surface-area-of-3d-shapes
// https://leetcode.com/problems/available-captures-for-rook

//  Today's questions:
// https://leetcode.com/problems/flood-fill
class Solution
{
public:
    void solve(vector<vector<int>> &image, int sr, int sc, int r, int c, int old, int newColor)
    {

        if (sr < 0 || sc < 0 || sr >= r || sc >= c || image[sr][sc] == newColor)
            return;
        if (image[sr][sc] == old)
        {
            image[sr][sc] = newColor;
            solve(image, sr + 1, sc, r, c, old, newColor);
            solve(image, sr, sc + 1, r, c, old, newColor);
            solve(image, sr - 1, sc, r, c, old, newColor);
            solve(image, sr, sc - 1, r, c, old, newColor);
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int r = image.size();
        int c = image[0].size();
        if (image[sr][sc] == newColor)
            return image;
        int old = image[sr][sc];

        solve(image, sr, sc, r, c, old, newColor);
        return image;
    }
};

// https://leetcode.com/problems/toeplitz-matrix
bool isToeplitzMatrix(vector<vector<int>> &matrix)
{

    int r = matrix.size();
    int c = matrix[0].size();

    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 0; j < c - 1; j++)
        {
            if (matrix[i][j] != matrix[i + 1][j + 1])
                return false;
        }
    }
    return true;
}

// https://leetcode.com/problems/flipping-an-image
vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int r = image.size();
    int c = image[0].size();

    for (int i = 0; i < r; i++)
    {
        reverse(image[i].begin(), image[i].end());
        for (int j = 0; j < c; j++)
            image[i][j] = (image[i][j] ^ 1);
    }
    return image;
}

// https://leetcode.com/problems/transpose-matrix
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();
    vector<vector<int>> vec(c, vector<int>(r));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            vec[j][i] = matrix[i][j];
        }
    }
    return vec;
}