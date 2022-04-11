#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
    int x = 0;
    int i = 1;
    int j = 1;
    int n = 1;
    while (scanf("%d", &x) != EOF)
    {
        i = 1;
        for (; i <= x; i++)
        {
            j = 1; n = 1;
            if (i != x)
            {
                for (; j < 2 * x; j++)
                {
                    if (j == 1 || j == 2 * i - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            else
                for (; n <= x; n++)
                    printf("* ");

        }
        printf("\n");
    }

    return 0;
}
