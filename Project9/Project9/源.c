#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
    int x = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int w = 0;
    while (scanf("%d", &x) != EOF)
    {
        i = 0;
        for (; i <4 * x; i++)
        {
            if (i < 3 * x)
            {
                    j = 0; k = 0; int n = 0; w = 0;
                    for (; j < 3 * x; j++)
                    {
                        if (j < 3 * x - i - 1)
                            printf(" ");

                    }
                    if (i % 3 == 0)
                    {
                        for (; k <=(i/3); k++)
                            printf("*     ");
                        
                    }
                    else if (i % 3 == 1)
                    {
                        for (; n <=(i/3); n++)
                            printf("* *   ");
                   
                    }
                    else if (i % 3 == 2)
                    {
                        for (; w<=(i/3); w++)
                            printf("* * * ");
                        
                    }printf("\n");
                
    
            }
            else
            {
                w = 0;
                for (; w <3*x; w++)
                {
                    if (w == 3 * x-1)
                        printf("*");
                    else
                        printf(" ");
                    
                }printf("\n");
            }
        }
    }

    return 0;
}