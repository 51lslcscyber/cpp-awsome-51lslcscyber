// 编写一个递归函数和一个非递归函数，分别实现求1+2+3+...+n
// Created by 鹄思鹄想_bit森 on 2022/5/26.
//
#include <stdio.h>
int sum(int n)
{
    if(n == 1)
        return 1;
    else
        return n + sum(n-1);
}
int sum_2(int n)
{
    int ss = 0;
    for (int i = 1; i <=n;i++)
    {
        ss += i;
    }
    return ss;
}
int main()
{
    int n;
    printf("请输入n：");
    scanf("%d",&n);
    if(n == 0)
    {
        printf("请输入正整数n");
        return -1;
    }
    int s1 = sum(n);
    int s2 = sum_2(n);
    printf("递归计算=%d;循环计算=%d\n",s1,s2);
    return 0;
}