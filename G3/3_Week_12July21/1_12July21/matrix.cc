// Matrices are stored linearly in memory.
// [1 2 3
//  4 5 6
//  7 8 9]
// 1 2 3 4 5 6 7 8 9 - Row Major Format/TV scanning format
// 1 4 7 2 5 8 3 6 9 - Column major format(generally not used.)

// Adress calculation having n rows and m columns
// Adress of a[i][j] = base address+(m*size*i)+(size*j)

// Dynamic Memory Allocation in case of 2d matrix
// int *m = (int *) malloc(sizeof(int)*r*c); r-no.of rows,c-no.of columns.