#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
    int x = 0;
    int i = 0;
    int j = 0;

    while (scanf("%d", &x) != EOF)
    {
        int n = 0;
        i = 0;
        for (; i < 2 * x + 1; i++)
        {
            j = 0; n=0;
            for (; j < x + 1; j++)
            {
                if (i + j <= x)
                    printf("* ");
                else if (i-j>= x)
                    printf("* ");
            }
            printf("\n");
        }

    }

    return 0;
}