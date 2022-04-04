//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 简单算法实现，冒泡排序
//
#include<stdio.h>
#define MAX_SIZE 12
int main()
{
    int i;
    int j;
    int temp;
    int a[MAX_SIZE] = {6, 8, 4, 9, 11, 98, 3, 2, 10, 78, 88, 28};
    for (i = 4; i > 0; i--)
    {
        for (j = 0; j < i; j++)         //两个for反向循环
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 12; i++)
    {
        printf("%d", a[i]);
        printf("\t");
    }

}