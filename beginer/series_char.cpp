//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 输出连续数字之和
//
#include<stdio.h>
int main()
{

    int i=0;

    int count=0;

    int sum=0;

    char str[100];

    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            sum=sum*10+str[i]-48;
        }
        else
        {
            count=count+sum;
            sum=0;
        }
        i++;
    }
    if(str[i-1]>='0'&&str[i-1]<='9')
    {
        count=count+sum;
    }
    printf("%d\n",count);
}

