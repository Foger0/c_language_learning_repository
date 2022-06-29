#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
void reverse(char a[100])
{
    int right = strlen(a) - 1;
    int left = 0;
    while (right > left)
    {
        int temp = 0;
        temp = a[right];
        a[right] = a[left];
        a[left] = temp;
        right--;
        left++;
    }
}
void reverse1(char a[100], int b)
{
    int i = 0;
        for (int j = 0; j < b + 1; j++)
        {
            int count = 0;

            for (;; i++)
            {
                count++;
                if (a[i] == ' '|| a[i] == '\0')
                {
                    i++;
                    break;
                }
            }
            int right = i - 2;
            int left = i - count;
            while (right > left)
            {
                int temp = 0;
                temp = a[right];
                a[right] = a[left];
                a[left] = temp;
                right--;
                left++;
            }
        }
}
int main()
{
    char a[100] = { 0 };
    gets(a);
    reverse(a);
    int b = 0;
    for (int i = 0; i < strlen(a) - 1; i++)
    {
        if (a[i] == ' ')
        {
            b++;
        }
    }
        reverse1(a, b);
    
    puts(a);
    return 0;
}