#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//RAND_MAX��system
#include<time.h>//����ʱ���

//���Բ���һ����������֣�1-100��
//������
//�´���
//��С��
//ֱ���¶��ˣ�����

////menu����
//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//}
////game����
////0~RAND_MAX(0*7FFF=32767)
////RAND_MAX����ֱ����������,���ȵ���srand������
////����һ���������㡪���޷����͵���ֵ��ȱ�㣺Ҫ������һ�������������ʵ
//void game()
//{
//	int guess = 0;
//	//1�����������
//	int ret = rand() %100 + 1;//��������ĺ���
//	//printf("%d\n",ret);���ֲ���ʾ
//	//2��������
//	while(1)//While 1ʹ��ѭ��ֻ�н��е�break��ֹͣ
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���");
//			break;
//		}
//	}
//}
////ָ��
////int *p = NULL;
////int a = 0;
//int main()
//{
//	int input = 0;
//	srand((unsigned int )time(NULL));//ʱ����׶ˣ����ù��죬���ܳ����������ͬ�����
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1 :
//			game();//�����ֵ������߼���[printf("������\n");]
//			break;
//		case 0 ://0Ϊ�٣������������Ϊ0������break���˳���Ϸ
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto���

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�ػ�����

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//}

//дһ�����������ҳ����������е����ֵ

//get_max(int x,int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	//��ϴ�ֵ
//	int m = get_max(a, b);
//	printf("%d\n",m);
//	return 0;
//}

//дһ���������Խ����������α���������
//x yΪ�βΣ���ʽ����
void swap(int* px ,int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=a
}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ��
int main()
{
	int a = 0; 
	int b = 0;
	scanf("%d %d",&a,&b);
	//����
	printf("����ǰ��a=%d b=%d\n",a, b);
	//a bΪʵ��
	swap(&a,&b);
	printf("������a=%d b=%d\n", a, b);

	return 0;
}