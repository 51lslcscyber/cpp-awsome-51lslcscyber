//
// Created by ��˼����_bitɭ on 2022/4/14.
// ����Сд��ĸ�Ĳ������������
//
//���ǣ�����Сд��������־ͽ�������
//
//�Ƚ�������ĸ�Ĳ�����diff������ֵĺ�����д��ִ�н��
//
//����������Сд��a b
//
//��ĸa����ĸb��������1��
//
//����������Сд��f b
//
//��ĸf����ĸb�Ĳ���4��
//
//����������Сд��0 a
//
//�˳�����
//
//���³���ʵ������һ���ܣ����㲹ȫ�հ״����ݣ�
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
//        cout << "����������Сд��";
//        cin >> a >> b;
//        if (a > 'z' || a < 'a' || b > 'z' || b < 'a')
//            break;
//        cout << "����" << a << "������" << b << "�Ĳ���" << diff(a, b) << "��\n";
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
        cout << "����������Сд��";
        cin >> a >> b;
        if (a > 'z' || a < 'a' || b > 'z' || b < 'a')
            break;
        cout << "����" << a << "������" << b << "�Ĳ���" << diff(a, b) << "��\n";
    }
    return 0;
}
//return ch1 - ch2;

//if (ch1 < ch2)
//	return ch1 - ch2;
//else
//	return ch2 - ch1;

//return ch2 - ch1;