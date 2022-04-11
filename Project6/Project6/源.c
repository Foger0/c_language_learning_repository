#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
    int x = 0;
    while (scanf("%d", &x) != EOF)
    {
        int j = 0;
        int i = x;
        int n = x;
        for (; j < i; j++, n--)
        {
            x = i;
            for (; x > 0; x--)
            {
                if (x == j + 1 && j + 1 != n)
                {
                    printf("*");
                }
                else if (x == n)
                    printf("*");
                else
                    printf(" ");

            }
            printf("\n");
        }
    } return 0;
}