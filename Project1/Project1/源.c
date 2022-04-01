#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if(a>b&&a>c)
		printf("max=%f\n",a);
	else if(c>a&&c>b)
		printf("max=%f\n", c);
	else if(b>a&&b>c)
	 printf("max=%f\n", b);

	return 0;
}