// 给定一个字符串 (s) 和一个字符模式 (p) ，实现一个支持 '?' 和 '*' 的通配符匹配。
//
//'?' 可以匹配任何单个字符。'*' 可以匹配任意字符串（包括空字符串）。
//
//两个字符串完全匹配才算匹配成功。
//
//说明:
//
//s 可能为空，且只包含从 a-z 的小写字母。
//p 可能为空，且只包含从 a-z 的小写字母，以及字符 ? 和 *。
//
//示例 1:
//
//输入:s = "aa"p = "a"
//输出: false
//解释: "a" 无法匹配 "aa" 整个字符串。
//
//示例 2:
//
//输入:s = "aa"p = "*"
//输出: true
//解释: '*' 可以匹配任意字符串。
//
//示例 3:
//
//输入:s = "cb"p = "?a"
//输出: false
//解释: '?' 可以匹配 'c', 但第二个 'a' 无法匹配 'b'。
//
//示例 4:
//
//输入:s = "adceb"p = "*a*b"
//输出: true
//解释: 第一个 '*' 可以匹配空字符串, 第二个 '*' 可以匹配字符串 "dce".
//
//示例 5:
//
//输入:s = "acdcb"p = "a*c?b"
//输出: false
//
//以下程序实现了这一功能，请你填补空白处的内容：
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
//static bool isMatch(char *s, char *p)
//{
//	char *last_s = NULL;
//	char *last_p = NULL;
//	while (*s != '\0')
//	{
//		if (*p == '*')
//		{
//			if (*++p == '\0')
//			{
//				return true;
//			}
//			last_s = s;
//			last_p = p;
//		}
//		_____________________;
//		else
//		{
//			return false;
//		}
//	}
//	while (*p == '*')
//	{
//		p++;
//	}
//	return *p == '\0';
//}
//int main(int argc, char **argv)
//{
//	if (argc != 3)
//	{
//		fprintf(stderr, "Usage: ./test string pattern\n");
//		exit(-1);
//	}
//	printf("%s\n", isMatch(argv[1], argv[2]) ? "true" : "false");
//	return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/4/30.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
static bool isMatch(char *s, char *p)
{
	char *last_s = NULL;
	char *last_p = NULL;
	while (*s != '\0')
	{
		if (*p == '*')
		{
			if (*++p == '\0')
			{
				return true;
			}
			last_s = s;
			last_p = p;
		}
        else if (*p == '?' || *s == *p)
        {
            s++;
            p++;
        }
        else if (last_s != NULL)
        {
            p = last_p;
            s = ++last_s;
        }
		else
		{
			return false;
		}
	}
	while (*p == '*')
	{
		p++;
	}
	return *p == '\0';
}
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: ./test string pattern\n");
		exit(-1);
	}
	printf("%s\n", isMatch(argv[1], argv[2]) ? "true" : "false");
	return 0;
}
