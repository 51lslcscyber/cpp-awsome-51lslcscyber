//
// Created by 鹄思鹄想_bit森 on 2022/4/14.
// 两个小写字母的差用整数输出。
//
//但是，输入小写以外的文字就结束程序。
//
//比较两个字母的部分用diff这个名字的函数书写。执行结果
//
//请输入两个小写：a b
//
//字母a和字母b的区别是1。
//
//请输入两个小写：f b
//
//字母f和字母b的差是4。
//
//请输入两个小写：0 a
//
//退出程序。
//
//以下程序实现了这一功能，请你补全空白处内容：
//
//#include <iostream>
//using namespace std;
//int diff(char ch1, char ch2)
//{
//    __________________;
//}
//int main()
//{
//    char a, b;
//    while (1)
//    {
//        cout << "请输入两个小写：";
//        cin >> a >> b;
//        if (a > 'z' || a < 'a' || b > 'z' || b < 'a')
//            break;
//        cout << "文字" << a << "和文字" << b << "的差是" << diff(a, b) << "。\n";
//    }
//    return 0;
//}
#include <iostream>
using namespace std;
int diff(char ch1, char ch2)
{
    return abs(ch1 - ch2);
}
int main()
{
    char a, b;
    while (1)
    {
        cout << "请输入两个小写：";
        cin >> a >> b;
        if (a > 'z' || a < 'a' || b > 'z' || b < 'a')
            break;
        cout << "文字" << a << "和文字" << b << "的差是" << diff(a, b) << "。\n";
    }
    return 0;
}
//return ch1 - ch2;

//if (ch1 < ch2)
//	return ch1 - ch2;
//else
//	return ch2 - ch1;

//return ch2 - ch1;