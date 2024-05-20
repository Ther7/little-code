#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>//Sleep 函数
#include <stdlib.h>//system("cls")
#include <string.h>//strcmp
//编写代码，演示多个字符从两端移动，向中间汇聚

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
//		//停顿1s
//		Sleep(1000);//单位 ms
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令，函数名：#include <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//char buf[] = "abc";
//[a b c \0]——4个字符

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则 提示登录成，如果三次均输入错误，则退出程序。
//1、for循环

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字母：abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		if (i == 3)
//		{
//			printf("三次密码均输入错误，退出程序\n");
//		}
//	}
//	return 0;
//}   

//