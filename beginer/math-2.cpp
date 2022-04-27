//
// Created by 鹄思鹄想_bit森 on 2022/4/14.
//2、一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如，6的因子为1、2、3，而6 = 1 + 2 + 3，因此6是“完数”。编程序找出1000之内的所有完数，并按下面的格式输出其因子：
//6 -〉1，2，3
#include <iostream>
int main()
{
    int i,j,sum=0,a[50],k,t;
    for(i=1;i<=1000;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[k++]=j;
            }
        }
        t=k;
        if(sum==i)
        {
            cout<<i<<"->";
            for(k=0;k<t;k++)
            {
                cout<<a[k];
                if(k<t-1)cout<<",";
            }
            cout<<endl;
        }
        k=0;
    }
}
