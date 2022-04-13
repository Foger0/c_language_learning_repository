#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
    int x = 0;
    int i = 1;
    int j = 1;
    int k = 0;
    int w = 1;
    while (scanf("%d", &x) != EOF)
    {
        i = 1;
        for (; i <=4 * x; i++)
        {
            if (i <= 3 * x)
            {
                j = 1; k = 0;
                for (; j <= 3 * x; j++)
                {
                    if (j <= 3 * x - i)
                        printf(" ");

                }
                for (; k < i; k++)
                    printf("* ");
                printf("\n");
            }
            else
            {
                w = 1;
                for (; w <=3*x; w++)
                {
                    if (w == 3 * x)
                        printf("*");
                    else
                        printf(" ");
                    
                }printf("\n");
            }
        }
    }

    return 0;
}