#define _CRT_SECURE_NO_WARNINGS 1

//2Сʱ�γ�
//if���
//switch���
//����else�����ifƥ��
//break��ֹѭ��
//continue��ֹ����ѭ��
//EOF ctrlZ

#include <stdio.h>

int main()
{
	int ch = getchar();
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}


	//���1-100������

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
	//if (num = 5) //=��ֵ
	//{
	//	printf("hehe\n");
	//}


	/*int age = 45;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("����\n");*/


	/*int age = 10;
	if (age < 18)
		printf("δ����\n");
	else
		printf("�ѳ���\n");*/

	return 0;
}

