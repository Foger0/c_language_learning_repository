#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int stairs(int a)
{
    if (a >=2)
        return stairs(a - 1) + stairs(a - 2);
    else
        return 1;

}
int main()
{
    int a = 0;
    while ((scanf("%d", &a))!= EOF)
        printf("%d", stairs(a));
    return 0;
}