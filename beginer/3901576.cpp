// 输入n（1≤n≤10）个整数，用冒泡排序法对其从小到大排序，共进行n-1趟，要求输出每一趟的排序情况
//
//输入格式:
//
//先输入个数n，再输入n个整数。
//
//输出格式:
//
//第1趟结果
//
//第2趟结果
//
//......
//
//第n-1趟结果
//
//每个数后面有一个空格，每个序列占一行。
//
//输入样例:
//
//5
//4 2 3 2 1
//
//输出样例:
//
//2 3 2 1 4
//2 2 1 3 4
//2 1 2 3 4
//1 2 2 3 4
//
//以下程序实现了这一功能，请你补全空白处内容：
//
//#include "stdio.h"
//int main()
//{
//    int arr[10];
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                ____________________;
//            }
//        }
//        for (int j = 0; j < n; j++)
//            printf("%d ", arr[j]);
//        printf("\n");
//    }
//    return 0;
//}
// Created by 鹄思鹄想_bit森 on 2022/4/28.
//
#include "stdio.h"
int main()
{
    int arr[10];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
        for (int j = 0; j < n; j++)
            printf("%d ", arr[j]);
        printf("\n");
    }
    return 0;
}
