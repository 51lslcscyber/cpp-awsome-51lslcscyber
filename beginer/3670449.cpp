//
// Created by 鹄思鹄想_bit森 on 2022/4/14.
// 个位数为6，且能被3整除的五位数有多少个？
#include <iostream>

using namespace std;
void search1(){
    int i,t=0;
    for(i=10000;i<=99999;i++){
        if(i%3==0&&i%10==6)
            t++;
    }
    cout<<t;
}
int main()
{
    search1();

    return 0;
}

