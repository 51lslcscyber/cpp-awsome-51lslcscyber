// 设计一个可以完成任意五则运算（加法/减法/乘法/除法/取余）的程序。除法按照计算机中整型相除来计算。
//输入格式
//多行输入，每输入一行数据对应输出一行。
//每行输入格式为 a # b，其中 ＃∈{+,−,∗,/,%}
//a,b均为自然数
//输出格式
//每行输出对应的计算结果；
//当运算为除法/取余的时候，如果除数为 0 ，输出 
//WA
// 。
//
//输入样例
//
//2+2
//4*5
//6/7
//4%3
//4%0
//
//输出样例
//
//4
//20
//0
//1
//WA
//
//以下程序实现了这一功能，请你补全空白处内容：
//
//#include <stdio.h>
//int main()
//{
//    int a;
//    int b;
//    char operation;
//    int num;
//    while (scanf("%d", &a) != EOF)
//    {
//        scanf("%c", &operation);
//        scanf("%d", &b);
//        if (operation == '+')
//        {
//            num = a + b;
//            printf("%d\n", num);
//        }
//        else if (operation == '-')
//        {
//            num = a - b;
//            printf("%d\n", num);
//        }
//        else if (operation == '*')
//        {
//            num = a * b;
//            printf("%d\n", num);
//        }
//        _________________________;
//        else
//        {
//            printf("%s\n", "WA");
//        }
//    }
//    return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/4/27.
//
#include <stdio.h>
int main()
{
    int a;
    int b;
    char operation;
    int num;
    while (scanf("%d", &a) != EOF)
    {
        scanf("%c", &operation);
        scanf("%d", &b);
        if (operation == '+')
        {
num = a + b;
            printf("%d\n", num);
        }
        else if (operation == '-')
        {
            num = a - b;
            printf("%d\n", num);
        }
        else if (operation == '*')
        {
            num = a * b;
            printf("%d\n", num);
        }
        else if (operation == '/' && b != 0)
        {
            num = a / b;
            printf("%d\n", num);
        }
        else if (operation == '%' && b != 0)
        {
            num = a % b;
            printf("%d\n", num);
        }
        else
        {
            printf("%s\n", "WA");
        }
    }
    return 0;
}
