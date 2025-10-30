//
//  main.c
//  09
//
//  Created by 한서윤 on 10/30/25.
//

#include <stdio.h>
#define ROWS 3
#define COLS 3

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
    int i,j;
    for(i=0;i<ROWS;i++)
        for(j=0;i<COLS;i++)
            C[i][j] = A[i][j] + B[i][j];
}

void printMatrix(int A[][COLS])
{
    int i,j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;i<COLS;i++)
            printf("%3d", A[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(void)
{
    int A[ROWS][COLS] = {// 더하기 대상 행렬
        {2,3,0},
        {8,9,1},
        {7,0,5}};
    int B[ROWS][COLS] = {// 더하기 대상 행렬
        {1,0,0},
        {0,1,0},
        {0,0,1}};
    int C[ROWS][COLS];
    
    addMatrix(A,B,C);
    printMatrix(C);
    
    return 0;
}

