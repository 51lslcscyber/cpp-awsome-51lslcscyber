// 求10-100之间个位数为7的质数
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <stdio.h>
//int isp(int n)
//{
//	int i;
//	if (n<2)
//		return 0;
//	for (i=2;i*i<=n;++i)
//	{
//		_______________;
//	}
//	return 1;
//}
//int main()
//{
//	int i=17;
//	while (i<=100)
//	{
//		if (isp(i))
//			printf("%d  ",i);
//		i+=10;
//	}
//	printf("\n");
//	return 0;
//}
//
// Created by 鹄思鹄想_bit森  on 2022/5/22.
//
#include <stdio.h>
int isp(int n)
{
	int i;
	if (n<2)
		return 0;
	for (i=2;i*i<=n;++i)
	{
        if (n%i==0)
            return 0;
	}
	return 1;
}
int main()
{
	int i=17;
	while (i<=100)
	{
		if (isp(i))
			printf("%d  ",i);
		i+=10;
	}
	printf("\n");
	return 0;
}
