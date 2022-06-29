#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
void reserve(int* px)
{
    int j = 10;
    for (int i = 0; i <j ; i++,j--)
    {
        int temp = 0;
        temp = *(px + i);
        *(px + i) = *(px + j-1);
        *(px + j-1) = temp;
    }
}
int main()
{
    int arr[10] = { 0 };
    for (int n = 0; n < 10; n++)
    {
        scanf("%d", &arr[n]);
    }
    reserve(arr);
    for (int n = 0; n < 10; n++)
    {
        printf("%2d", arr[n]);
    }
    return 0; 
}