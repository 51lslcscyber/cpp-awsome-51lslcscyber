//
// Created by 鹄思鹄想_bit森 on 2022/4/14.
//输出100以内（不含100）能被3整除且个位数为6的所有整数

#include <stdio.h>
int main()
{
    int i,j;

    for(i = 0; i <= 10; i++)
    {
        // 先筛选出来个位数是6的数
        j = i * 10 + 6;
        if(j % 3 != 0)
        {
            continue;
        }
        printf("%d ",j);
    }

    return 0;
}

