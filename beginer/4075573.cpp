// ��1����׼����=������-110����� ��2��������׼����5����Ϊ���֣� ��3�����ڱ�׼����5����Ϊ���ݡ� ���磺�������ߺ����طֱ�Ϊ160��60�����Ϊ���� �������ߺ����طֱ�Ϊ160��50�����Ϊ��׼ �������ߺ����طֱ���160��40�����Ϊ����
//
// Created by ��˼����_bitɭ on 2022/5/10.
//
#include <stdio.h>
int main()
{
    int h,w;
    printf("���������ߣ����ף������أ������");
    scanf("%d %d",&h,&w);
    int s = h - 110;
    if( (w-s) > 5)
        printf("����\n");
    else if( s - w > 5)
        printf("����");
    else
        printf("��׼\n");
    return 0;
}