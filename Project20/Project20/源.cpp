#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
    int iput = 0;
    scanf("%d",&iput);
    int arr[30][30] = {0};
    for (int i = 0; i < iput; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    for (int p = 0; p < iput; p++)
    {
        for (int r = 0; r <= p; r++)
        {

            printf("%5d", arr[p][r]);
        }
        printf("\n");
    }
    return 0;
}