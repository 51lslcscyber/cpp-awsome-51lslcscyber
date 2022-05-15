// 题目描述
//
//一个数里面若含有数字1，则归类到1字类，含有数字2，则归类到2字类，所以一个数可能同时归类到不同的数字类。对于0、1、2、3、4、5、6、7、8、9这十个数字类，因研究需要，急于想知道某一堆数中，究竟归类到这些数字类的个数。
//
//样例输入
//
//123 456 175 2 61 9998 12 5053 382
//
//样例输出
//
//0: 1
//1: 4
//2: 4
//3: 3
//4: 1
//5: 3
//6: 2
//7: 1
//8: 2
//9: 1
//
//提示
//
//注意：输出结果中冒号后面有空格
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <stdio.h>
//#include <string.h>
//int result[10];
//int main(void)
//{
//    memset(result, 0, sizeof(int) * 10);
//    int n;
//    int arr[10];
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(arr, 0, sizeof(int) * 10);
//        if (n == 0)
//            arr[0] = 1;
//        while (n > 0)
//        {
//			____________;
//        }
//        for (int i = 0; i < 10; i++)
//            result[i] += arr[i];
//    }
//    for (int i = 0; i < 10; i++)
//        printf("%d: %d\n", i, result[i]);
//    return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/9.
//
#include <stdio.h>
#include <string.h>
int result[10];
int main(void)
{
    memset(result, 0, sizeof(int) * 10);
    int n;
    int arr[10];
    while (scanf("%d", &n) != EOF)
    {
        memset(arr, 0, sizeof(int) * 10);
        if (n == 0)
            arr[0] = 1;
        while (n > 0)
        {
            arr[n % 10] = 1;
            n = n / 10;
        }
        for (int i = 0; i < 10; i++)
            result[i] += arr[i];
    }
    for (int i = 0; i < 10; i++)
        printf("%d: %d\n", i, result[i]);
    return 0;
}
