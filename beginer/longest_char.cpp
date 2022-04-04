//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 输出最长连续数字长度
//
#include<stdio.h>
int main()
{
    int i=0;

    int count=0;

    int result=0;

    char str[100];

    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            count++;
        }
        else
        {
            if(count>result)
            {
                result=count;
            }
            count=0;
        }
        i++;
    }
    if(str[i-1]>='0'&&str[i-1]<='9')  //末尾判断是否为数字
    {
        if(count>result)
        {
            result=count;
        }
    }
    printf("%d\n",result);
}
