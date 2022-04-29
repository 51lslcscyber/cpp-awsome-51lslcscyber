// 给定n（n≤100）个正整数，所有正整数均≤1000000；求其中所有素数的和。
//例如给定序列： 2 3 4 5 6，素数和为：10
//给定序列： 3 4 5 6 7， 素数和为：15
//给定序列： 12 19 23 35 68 71， 素数和为： 113
//输入格式：
//输入为两行。第一行是一个正整数n，表示有多少个数据。第二行是n个正整数组成的序列。
//输出格式：
//输出一个正整数，是上述序列中所有素数之和。
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <stdio.h>
//int isprime( int n);
//int main()
//{
//	int i,n,m,s=0;
//	scanf("%d", &n);
//	for( i=0; i<n; i++ ) {
//		scanf("%d", &m);
//		if(isprime(m)){
//			s+=m;
//		}
//	}
//	printf("%d", s);
//	return 0;
//}
//int isprime(int n)
//{
//	int i;
//	if(n<=1) return 0;
//	for(i=2;i*i<=n;i++)
//		_______________;
//	return 1;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/4/29.
//
#include <stdio.h>
int isprime( int n);
int main()
{
	int i,n,m,s=0;
	scanf("%d", &n);
	for( i=0; i<n; i++ ) {
		scanf("%d", &m);
		if(isprime(m)){
			s+=m;
		}
	}
	printf("%d", s);
	return 0;
}
int isprime(int n)
{
	int i;
	if(n<=1) return 0;
	for(i=2;i*i<=n;i++)
        if(n%i==0) return 0;
	return 1;
}
