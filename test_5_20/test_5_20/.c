#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>//Sleep ����
#include <stdlib.h>//system("cls")
#include <string.h>//strcmp
//��д���룬��ʾ����ַ��������ƶ������м���

//int main()
//{
//	char arr1[] = "Welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right = sizeof(arr1)/sizeofarr(arr1[0]-2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//ͣ��1s
//		Sleep(1000);//��λ ms
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ�����������#include <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//char buf[] = "abc";
//[a b c \0]����4���ַ�

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ�� ��ʾ��¼�ɣ�������ξ�����������˳�����
//1��forѭ��

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//������������ĸ��abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		if (i == 3)
//		{
//			printf("�����������������˳�����\n");
//		}
//	}
//	return 0;
//}   

//