//
// Created by 鹄思鹄想_bit森 on 2022/4/15.
//结构体内存对齐
// 问题说明：结构体作为一种复合数据类型，其构成元素既可以是基本数据类型的变量，也可以是一些复合型类型数据。对此，编译器会自动进行成员变量的对齐以提高运算效率。默认情况下，按自然对齐条件分配空间。各个成员按照它们被声明的顺序在内存中顺序存储，第一个成员的地址和整个结构的地址相同，向结构体成员中size最大的成员对齐。
//许多实际的计算机系统对基本类型数据在内存中存放的位置有限制，它们会要求这些数据的首地址的值是某个数k（通常它为4或8）的倍数，而这个k则被称为该数据类型的对齐模数。
#include<stdio.h>
struct S1
{
    int i:8;
    char j:4;
    int a:4;
    double b;
};

struct S2
{
    int i:8;
    char j:4;
    double b;
    int a:4;
};

struct S3
{
    int i;
    char j;
    double b;
    int a;
};

int main()
{
    printf("%d\n",sizeof(S1));  // 输出8
    printf("%d\n",sizeof(S1));  // 输出12
    printf("%d\n",sizeof(S3));  // 输出8
    return 0;
}

sizeof(S1)=16
sizeof(S2)=24
sizeof(S3)=32
