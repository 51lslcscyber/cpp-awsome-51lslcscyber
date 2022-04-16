//
// Created by 鹄思鹄想_bit森 on 2022/4/16.
//
struct rmap
{
    char *r;
    int v;
    int l;
} units[] = {
        {"M", 1000, 1},
        {"CM", 900, 2},
        {"D", 500, 1},
        {"CD", 400, 2},
        {"C", 100, 1},
        {"XC", 90, 2},
        {"L", 50, 1},
        {"XL", 40, 2},
        {"X", 10, 1},
        {"IX", 9, 2},
        {"V", 5, 1},
        {"IV", 4, 2},
        {"I", 1, 1}};
#include <string.h>
int romanToInt(char *s)
{
    int len = strlen(s);
    char *end = s + len;
    int i = 0;
    int r = 0;
    while (i < 13)
    {
        if (end - s >= units[i].l && memcmp(s, units[i].r, units[i].l) == 0)
        {
            r += units[i].v;
            s += units[i].l;
        }
        else
            i++;
    }
    return r;
}
