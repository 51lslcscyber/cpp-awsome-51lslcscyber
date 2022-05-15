// 简单数列5(http://114.67.86.56:5000/Problem_Show.asp?id=1045)
// 已知一数列：1,3,3,5,5,5,7,7,7,7,9,9,9,9,9,11,11,11,11,11,11,11.....请根据规律求出第n项的值。例如：n=4 项时，其值为5,n=11时，其值为9. 输入格式 一个自然数n,(0<n<1000)
//
//输出格式 一个整数，即第n项的值。
//样例输入：4
//样例输出 ：5
//
// Created by 鹄思鹄想_bit森 on 2022/4/30.
//
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    int n=1,count=1,num=1;
    for(int i=0;i<a;i++)
    {
        if(count > n)
        {
            num+=2;
            n++;
            count=1;
            i--;
        }
        else
        {
            cout << num << ",";
            count++;
        }
    }
    cout << endl;
    cout << num;
    return 0;
}
