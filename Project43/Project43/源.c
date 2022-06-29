#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
change(int arr[])
{
    for (int i = 0; i <10; i++)
    {
        if (arr[i] % 2 == 1)
        {
            int j = i;
            while (1)
            {  if (arr[i - 1] % 2 == 1 || i<=0)
                    break;
                int tem = 0;
                tem = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tem;
                i = i - 1;   
            }
            i = j;
        }
    }
}
int main()
{
    int arr[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
   }
    change(arr);
    for (int i = 0; i <10; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}