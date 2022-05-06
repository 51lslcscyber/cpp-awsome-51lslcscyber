// 题目描述
//
//将一维数组中的元素循环左移 k 个位置
//
//输入描述
//
//第 1 行是一维数组元素的个数 n (数组大小)
//
//第 2 行是一个整数 k , 表示移动的位置
//
//下面 n 行为数组的元素个数
//
//输出描述
//
//输出 n 行，表示移动后的数字
//
//以下程序实现了这一功能，请你补全空白处内容：
//
//#include <stdio.h>
//#define N 10000
//int main()
//{
//    int k, a[N], b[N], n, t, w, i;
//    scanf("%d", &n);
//    scanf("%d", &k);
//    for (i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    for (i = 0; i < k % n; i++)
//        b[i] = a[i];
//    for (i = 0; i < n; i++)
//    {
//        __________________;
//    }
//    for (i = 0; i < n; i++)
//        printf("%d\n", a[i]);
//    return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/6.
//

#include <stdio.h>
#define N 10000
int main()
{
    int k, a[N], b[N], n, t, w, i;
    scanf("%d", &n);
    scanf("%d", &k);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < k % n; i++)
        b[i] = a[i];
    for (i = 0; i < n; i++)
    {
        if (i < n - k % n)
            a[i] = a[i + k % n];
        else
            a[i] = b[i - n + k % n];
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}