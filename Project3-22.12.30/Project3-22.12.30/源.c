#define _CRT_SECURE_NO_WARNINGS 1

//1.5h
//while/if

#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}

	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{ 
		if (ch < '0' || ch > '9')
			continue;
			putchar(ch);
	}*/

	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", password);
	//while ((ch = getchar())!='\n')
	//{
	//	;
	//} 

	////getchar();              //清空缓存区
	//printf("请确认(Y/N):>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}

	return 0;
}