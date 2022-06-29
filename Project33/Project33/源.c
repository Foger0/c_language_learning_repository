#define _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int main()
{
    char a = 0;
    while (scanf("%c", &a) != EOF)
    {
        if (a >= 97 && a <= 122)
            printf("%c\n", a - 32);
        if (a >= 65 && a <= 90)
            printf("%c\n", a + 32);
    }
    return 0;
}