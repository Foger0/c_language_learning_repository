#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;

	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("gu\n");
	case 2:
		printf("lu\n");
	}
	return 0;
}