#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
struct stu
{
	int Number;
	char  Name[10];
	float  score1;
	float  score2;
	float  score3;
	float  average;
	int rank;
};
void aver(struct stu* ps)
{
	for (int i = 0; i < 5; i++)
	{
		ps->average = (ps->score1 + ps->score2 + ps->score3) / 3;
		ps = ps + 1;
	}
}
int main()
{
	struct stu stu1[5];
	for (int i = 0; i < 5; i++)
		scanf("%ld %s %f %f %f",&stu1[i].Number,&stu1[i].Name,&stu1[i].score1,&stu1[i].score2,&stu1[i].score3);
	 aver(stu1);
	 
	for (int i = 0; i < 5; i++)
	{
		int count = 0;
		for (int j = 0; j < 5; j++)
		{
			if ((stu1[i].average )>(stu1[j].average))
			{ 
				count++;
			}
		}
		stu1[i].rank = 5 - count;
	}
	printf("Number:  Name:        score:       Average£º  rank:\n");
	for (int i = 0; i < 5; i++)
		printf("%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n", stu1[i].Number, stu1[i].Name, stu1[i].score1, stu1[i].score2, stu1[i].score3,stu1[i].average,stu1[i].rank);
	return 0;
}