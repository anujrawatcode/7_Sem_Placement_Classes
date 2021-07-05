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