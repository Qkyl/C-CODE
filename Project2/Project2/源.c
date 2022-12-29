#define _CRT_SECURE_NO_WARNINGS 1

//2小时课程
//if语句
//switch语句
//悬空else与最近if匹配
//break终止循环
//continue终止本轮循环
//EOF ctrlZ

#include <stdio.h>

int main()
{
	int ch = getchar();
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}


	//输出1-100的奇数

	/*int num = 1;
	while(num <= 100)
	{
		if (num % 2 == 1)
			printf("%d ", num);
		num++;
	}*/

	/*int num;
	for(int num = 1 ; num <= 100 ; num++)
	{
	if (num % 2 == 1)
		printf("%d\t", num);
	}*/


	//int num = 4;
	//if (num = 5) //=赋值
	//{
	//	printf("hehe\n");
	//}


	/*int age = 45;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("长寿\n");*/


	/*int age = 10;
	if (age < 18)
		printf("未成年\n");
	else
		printf("已成年\n");*/

	return 0;
}

