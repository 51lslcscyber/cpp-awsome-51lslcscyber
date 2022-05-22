// 题目描述
//
//求前n个素数的和。
//
//例如，前5个素数是2、3、5、7、11，它们的和是28。
//
//输入
//
//一个整数n，1<=n<=1000。
//
//输出
//
//前n个素数的和
//
//样例输入
//
//5
//
//样例输出
//
//28
//
//提示
//
//第1000个素数是7919。
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, i, j, sum, a;
//    cin >> n;
//    a = 0;
//    i = 2;
//    sum = 0;
//    while (a < n)
//    {
//        __________________;
//        if (j == i)
//        {
//            sum += i;
//            ++a;
//        }
//        ++i;
//    }
//    cout << sum;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/22.
//
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, sum, a;
    cin >> n;
    a = 0;
    i = 2;
    sum = 0;
    while (a < n)
    {
        for (j = 2; j <= i; j++)
            if (i % j == 0)
                break;
        if (j == i)
        {
            sum += i;
            ++a;
        }
        ++i;
    }
    cout << sum;
}
