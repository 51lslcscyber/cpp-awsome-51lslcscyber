// ʵ�ִӼ�������һ���ַ�ʱ��������ַ�ΪСд��ĸ����ת��Ϊ��д��ĸ�����������ַ�Ϊ��д��ĸ����ת��ΪСд��ĸ��������Ϊ�����ַ�����ԭ�������
//
//���³���ʵ������һ���ܣ�������հ״����ݣ�
//
//#include<stdio.h>
//int main()
//{
//	char x,y;
//	printf("������һ���ַ���");
//	scanf("%c",&x);
//	if(x>='A'&&x<='Z')
//	{
//		(1)___________;
//		printf("����ĸ��һ����д��ĸ,ת�����Сд��ĸ�ǣ�%c",y);
//	}
//	else if(x>='a'&&x<='z')
//	{
//		(2)___________;
//		printf("����ĸ��һ��Сд��ĸ,ת����Ĵ�д��ĸ��%c",y);
//	}
//	else
//	{
//		printf("%c",x);
//	}
//	return 0;
//}
//
// Created by ��˼����_bitɭ on 2022/5/5.
//
#include<stdio.h>
int main()
{
	char x,y;
	printf("������һ���ַ���");
	scanf("%c",&x);
	if(x>='A'&&x<='Z')
	{
		y=y+32;
		printf("����ĸ��һ����д��ĸ,ת�����Сд��ĸ�ǣ�%c",y);
	}
	else if(x>='a'&&x<='z')
	{
        y=y-32;
		printf("����ĸ��һ��Сд��ĸ,ת����Ĵ�д��ĸ��%c",y);
	}
	else
	{
		printf("%c",x);
	}
	return 0;
}