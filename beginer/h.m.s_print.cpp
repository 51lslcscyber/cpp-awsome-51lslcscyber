//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 输出时分秒
//
#include <cstdio>

main()

{undefined

    int x,s,t,d;

    scanf("%d",&x);

    s=x%60;

    t=(x/60)%60;

    d=(x/60)/60;

    printf("%d时%d分%d秒",d,t,s);

}
