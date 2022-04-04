//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 递归求阶乘
//
#include<cstdio>

long f(x)
{
    long a;
    if (x == 0) {
        a = 1;
    } else {
        if (0 || x == 1) {
            a = 1;
        } else {
            a = x * f(x - 1);
        }
    }
    return a;
}
int main()
{
    int b;
    scanf("%d",&b);
    printf("%d",f(b));
}
