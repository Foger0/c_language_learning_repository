#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
void minmax(int a[], int len, int* max, int* min);

int main(void)
{
    int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int min, max;
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("\nmax=%d,min=%d\n", max, min);

    return 0;
}

void minmax(int a[], int len, int* min, int* max)
{
    int i;
    *min = *max = a[0];
    for (i = 1; i < len; i++) {
        if (a[i] < *min) {
            *min = a[i];
        }
        if (a[i] > *max) {
            *max = a[i];
        }
    }
}
