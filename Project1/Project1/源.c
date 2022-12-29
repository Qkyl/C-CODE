#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int ADD(int a, int b)
//{
//	int z = a + b;
//	return z;
//}

struct book
{
	char name[20];
	short price;
	int num;
};
int main ()
{
	struct book look = { "hello",10,5 };
	printf("%s\n", look.name);
	printf("%d\n", look.price);
	printf("%d\n", look.num);

	/*
	char arr[] = "abc";
	char arr1[] = { 'a','b','c',0 };
	printf("%s\n",arr);
	printf("%s\n", arr1);
	printf("%d\n", strlen(arr));
	*/




	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 100;
	int num4 = 200;
	int sum1 = ADD(num1, num2);
	int sum2 = ADD(num3, num4);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	*/


	/*
	int choose = 0;
	printf("你是否要好好学习？");
	printf("你的选择是（1/0）>:");
	scanf("%d", &choose);
	if (choose == 1)
	{
		printf("好office");
	}
	else
	{
		printf("卖红薯");
	}
	*/
	
	
	/*
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	*/
	return 0;
}