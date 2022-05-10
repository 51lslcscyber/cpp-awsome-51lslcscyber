// （1）标准体重=（身高-110）公斤； （2）超过标准体重5公斤为过胖； （3）低于标准体重5公斤为过瘦。 例如：输入身高和体重分别为160，60，输出为过胖 输入身高和体重分别为160，50，输出为标准 输入身高和体重分别是160，40，输出为过瘦
//
// Created by 鹄思鹄想_bit森 on 2022/5/10.
//
#include <stdio.h>
int main()
{
    int h,w;
    printf("请输入身高（厘米）和体重（公斤）：");
    scanf("%d %d",&h,&w);
    int s = h - 110;
    if( (w-s) > 5)
        printf("过胖\n");
    else if( s - w > 5)
        printf("过瘦");
    else
        printf("标准\n");
    return 0;
}
