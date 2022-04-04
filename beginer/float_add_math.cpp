//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//仿照高斯的小时数学
//进行浮点型运算1-1/3+1/5-1/7...+1/101
//

#include <stdio.h>
int main() {
    int i, c;
    double sum = 0.0;
    c = 1;
    for (i = 1; i <= 101; i += 2) {
        sum += 1.0 * c / i;
        c = -c;//每次循环都会改变符号
    }
    printf("sum=%f\n", sum);
}
