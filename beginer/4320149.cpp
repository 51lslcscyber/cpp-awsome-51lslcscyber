// ��дһ���ݹ麯����һ���ǵݹ麯�����ֱ�ʵ����1+2+3+...+n
// Created by ��˼����_bitɭ on 2022/5/26.
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
    printf("������n��");
    scanf("%d",&n);
    if(n == 0)
    {
        printf("������������n");
        return -1;
    }
    int s1 = sum(n);
    int s2 = sum_2(n);
    printf("�ݹ����=%d;ѭ������=%d\n",s1,s2);
    return 0;
}