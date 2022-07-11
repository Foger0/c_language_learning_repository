#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int compare_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 -*(char*)e2;
//}
//int main()
//{
//	char str[10] = "zayuhg";
//	qsort((void*)str, strlen(str), 1, compare_char);
//	puts(str);
//	return 0;
//}
struct stu{
	int a;
	char b[10];
};
/*typedef struct stu stu;
typedef struct stu* *stu;*///先定义了stu所以再像这样定义就不对了
typedef struct stu stu;
typedef struct stu* stu2;
int coomparebynum(const void* e1, const void* e2)
{
	return  ((stu2)e2)->a- ((stu2)e1)->a;//找到结构体成员
}
int main()
{
	stu stu1[3] = { {1,"hh"},{2,"esz"},{3,"xhz"} };
	qsort(stu1, 3, sizeof(stu1[0]), coomparebynum);
	return 0;
}
//int compare_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//void bubble_sort(void *p,int num,int sz,int compare(const void*e1,const void*e2))
//{
//	for (int i = 0; i <num -1; i++)
//	{
//		for (int j = 0; j < num- i - 1; j++)
//		{
//			if (compare((char*)p+j*sz,(char*)p+(j+1)*sz)>0)
//			{
//				for (int n = 0; n < sz; n++)
//				{
//					char* buffer=(char*)malloc(sz);
//					buffer[n] = ((char*)p+j*sz)[n];
//					((char*)p+j*sz)[n] = ((char*)p+(j+1)*sz)[n];
//					((char*)p+ (j + 1) * sz)[n] = buffer[n];
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	char str[10] = "zayuhg";
//	bubble_sort((void*)str, strlen(str), 1, compare_char);
//	puts(str);
//	return 0;
//}
