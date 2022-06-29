#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
int main()
{
    int x = 0;
    while (scanf("%d", &x) != EOF)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (j < x - i)
                    printf(" ");
            }
            for (int k = 0; k <2*i-1; k++)
                printf("*");
            printf("\n");
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (j < i)
                    printf(" ");
            }
            for (int k = 0; k < 2*(x - i)-1; k++)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}