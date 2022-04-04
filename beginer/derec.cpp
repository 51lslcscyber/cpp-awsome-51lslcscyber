//
// Created by 鹄思鹄想_bit森 on 2022/4/4.
//
// 输出n行*组成的正三角形
//

#include <stdio.h>
int main() {
    int i, j, n, m;
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &n);
        for (i = n; i >= 1; i--) {
            for (j = i; j < n; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
}