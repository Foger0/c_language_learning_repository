#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* buffer=NULL;
    buffer = (int*)malloc(8);
    buffer[0] = 1;
    buffer[1] = 2;
    for (int i = 0; i < 2; i++)
    {
        printf("%d", buffer[i]);
    }
}