//
// Created by 鹄思鹄想_bit森 on 2022/4/14.
//

#include <iostream>
int main()
{
    int i, a=0, b=0, c=0;
    for(i=100;i<1000;i++)
    {
        a=i%10;
        b=i/10%10;
        c=i/100%10;
        if(a*a*a+b*b*b+c*c*c==i)
            cout<<"i="<<i<<endl;
    }
}