// Created by  on
//
// Created by 鹄思鹄想_bit森 on 2022/5/16.
// 设某班有若干人，写一程序统计某一单科成绩各分数段的分布人数，每人的成绩随机输入，输入负数表示输入结束。
// 要求按下面的格式输出统计结果（“”表示实际分布人数） 0～39 40～49 50～59 …… 90～100 **
//已知一个浮点数A（0<A<5），求它由哪两个整数B/C相除的值最接近，有相同值时要求B最小
//        例如：
//
//A=0.2
//B=1 C=5
//
//以下程序实现了这一功能，请你填补空白处内容：
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float A = 0.56f;
//    int x = 0;
//    if (A < 0)
//    {
//        x = 1;
//        A = 1 / A;
//    }
//    float delta = 1;
//    int B = 1, C = 1;
//    do
//    {
//    ----------------;
//    } while (delta > 0.000001);
//    if (x == 0)
//        printf("%d / %d", C, B - 1);
//    else
//        printf("%d / %d", B - 1, C);
//    return 0;
//}

#include <stdio.h>
#include <math.h>
int main()
{
    float A = 0.56f;
    int x = 0;
    if (A < 0)
    {
        x = 1;
        A = 1 / A;
    }
    float delta = 1;
    int B = 1, C = 1;
    do
    {
        C = (int)(B * A);
        delta = fabs(C / (float)B - A);
        B++;
    } while (delta > 0.000001);
    if (x == 0)
        printf("%d / %d", C, B - 1);
    else
        printf("%d / %d", B - 1, C);
    return 0;
}
