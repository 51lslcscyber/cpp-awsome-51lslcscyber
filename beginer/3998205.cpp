// 实现从键盘输入一个字符时，如果该字符为小写字母，则转换为大写字母输出；如果该字符为大写字母，则转换为小写字母输出；如果为其他字符，则原样输出。
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include<stdio.h>
//int main()
//{
//	char x,y;
//	printf("请输入一个字符：");
//	scanf("%c",&x);
//	if(x>='A'&&x<='Z')
//	{
//		(1)___________;
//		printf("此字母是一个大写字母,转换后的小写字母是：%c",y);
//	}
//	else if(x>='a'&&x<='z')
//	{
//		(2)___________;
//		printf("此字母是一个小写字母,转换后的大写字母是%c",y);
//	}
//	else
//	{
//		printf("%c",x);
//	}
//	return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/5.
//
#include<stdio.h>
int main()
{
	char x,y;
	printf("请输入一个字符：");
	scanf("%c",&x);
	if(x>='A'&&x<='Z')
	{
		y=y+32;
		printf("此字母是一个大写字母,转换后的小写字母是：%c",y);
	}
	else if(x>='a'&&x<='z')
	{
        y=y-32;
		printf("此字母是一个小写字母,转换后的大写字母是%c",y);
	}
	else
	{
		printf("%c",x);
	}
	return 0;
}
