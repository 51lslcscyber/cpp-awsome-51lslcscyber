// 输入一个整数，将其按7进制位分解为各乘式的累加和
//
// Created by 鹄思鹄想_bit森 on 2022/5/6.
//
#include<stdio.h>
#define X 7
int main()
{
    int i=0;
    int mod,num=720;
    while(num)
    {
        mod=num%X;
        num/=X;
        if(mod!=0)
            printf("%d*7^%d%c",mod,i,(num>0)?'+':'\n');
        i++;
    }
    return 0;
}
