#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

struct
{
	char name[10];
	int age;
	char job;
	union
	{
		int clas;
		char position[10];
	}category;
}person[2];
int main()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		scanf("%s %d %c",&person[i].name, &person[i].age,&person[i].job);
		if (person[i].job == 's')
			scanf("%d", &person[i].category.clas);
		else if (person[i].job == 't')
			scanf("%s", &person[i].category.position);
	}
	printf("\n");
	printf("name age job class/position\n");
	for (i = 0; i < 2; i++)
	{
		if (person[i].job == 's')
			printf("%-10s%d%-4c%-10d\n", person[i].name, person[i].age, person[i].job, person[i].category.clas);
		else
			printf("%-10s%d%-4c%-10s\n",person[i].name, person[i].age, person[i].job, person[i].category.position);
	}
	return 0;
}
