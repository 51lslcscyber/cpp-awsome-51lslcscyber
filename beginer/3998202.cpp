// 输入：5
//
//输出：
//
//        A
//       ABA
//      ABCBA
//     ABCDCBA
//    ABCDEDCBA
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main()
//{
//    int N;
//    cin >> N;
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N - i; j++)
//            printf(" ");
//        ______________________;
//        printf("\n");
//    }
//    return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/4.
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("%c", (char)(j + 'A'));
        for (int j = i; j >= 0; j--)
            printf("%c", (char)(j + 'A'));
        printf("\n");
    }
    return 0;
}
