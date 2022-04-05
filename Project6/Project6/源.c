#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<math.h>
int main()
{
       int x;
       int i = 0;
    int b = 0;
    while(scanf("%d %d", &x, &b)!=EOF)
    {  for (; x < b; x++)
    {
        if (x == pow(x / 100, 3) + pow(x / 10 % 10, 3) + pow(x % 10, 3))
        {
            printf("%d ", x);
            i++;
        }

    }
    if (i == 0)
        printf("no");
    printf("\n");
    }return 0;
}