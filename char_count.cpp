//
// Created by 鹄思鹄想_bit森 on 2022/7/8.
//
#include <stdio.h>

int main(int argc, char** argv) {
    int a=0,b=0,c=0,d=0,e=0;
    char *p,str[80];
    p=str;//p指向数组str的首地址
    gets(str) ;
    while(*p)
        if(*p>='A' && *p<='Z')
        {a++;p++;}
        else if(*p>='a' && *p<='z')
        {b++;p++;}
        else if(*p==' ')
        {c++;p++;}
        else if(*p>='0' && *p<='9')
        {d++;p++;}
        else
        {e++;p++;}
    printf("大写字母=%d\n",a);
    printf("小写字母=%d\n",b);
    printf("数字=%d\n",d);
    printf("空格=%d\n",c);
    //printf("其余字符有：%d个\n",e);
    return 0;
}

