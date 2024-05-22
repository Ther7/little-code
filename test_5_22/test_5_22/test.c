#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//RAND_MAX、system
#include<time.h>//设置时间戳

//电脑产生一个随机的数字（1-100）
//猜数字
//猜大了
//猜小了
//直到猜对了，结束

////menu函数
//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//}
////game函数
////0~RAND_MAX(0*7FFF=32767)
////RAND_MAX——直接用有条件,需先调用srand生成器
////设置一个随机得起点——无法整型的数值。缺点：要先设置一个随机数，不现实
//void game()
//{
//	int guess = 0;
//	//1、生成随机数
//	int ret = rand() %100 + 1;//生成随机的函数
//	//printf("%d\n",ret);数字不显示
//	//2、猜数字
//	while(1)//While 1使得循环只有进行到break才停止
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
////指针
////int *p = NULL;
////int a = 0;
//int main()
//{
//	int input = 0;
//	srand((unsigned int )time(NULL));//时间戳弊端：设置过快，可能出现随机数相同的情况
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1 :
//			game();//猜数字得整个逻辑，[printf("猜数字\n");]
//			break;
//		case 0 ://0为假，所以这里必须为0，才能break，退出游戏
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto语句

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//关机程序

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//}

//写一个函数可以找出两个整数中的最大值

//get_max(int x,int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	//求较大值
//	int m = get_max(a, b);
//	printf("%d\n",m);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//x y为形参，形式参数
void swap(int* px ,int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=a
}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会改变实参
int main()
{
	int a = 0; 
	int b = 0;
	scanf("%d %d",&a,&b);
	//交换
	printf("交换前：a=%d b=%d\n",a, b);
	//a b为实参
	swap(&a,&b);
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}