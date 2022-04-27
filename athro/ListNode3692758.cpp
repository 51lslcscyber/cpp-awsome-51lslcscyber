//
// Created by 鹄思鹄想_bit森 on 2022/4/14.
//题目描述：
//
//小C不喜欢带钱，有一次竟被他碰上了一家不能使用移动支付（也不能找钱）的神秘商店。请问小C至少准备多少张RMB才能恰好支付n元。RMB的面额有100元，50元，20元，10元，5元，1元。
//
//输入格式：
//
//输入一个整数n
//
//输出格式：
//
//最少带几张。
//
//样例输入1：
//
//50
//
//样例输出1：
//
//1
//
//约定：
//
//1<=n<=100
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <iostream>
//using namespace std;
//int solve(int tar, int * meta, int metan, int * seed = NULL, int seedn = 0)
//{
//	if (tar == 0)
//	{
//		return seedn;
//	}
//	int min = -1;
//	int m;
//	int * seed1 = new int[seedn + 1];
//	if (seed)
//		memcpy(seed1, seed, sizeof(int) * seedn);
//	for (int i = 0; i < metan; i++)
//	{
//		if (meta[i] <= tar)
//		{
//			seed1[seedn] = meta[i];
//			_____________________;
//			if (m != -1 && (min == -1 || min > m))
//				min = m;
//			break;
//		}
//	}
//	delete[] seed1;
//	return min;
//}
//int main()
//{
//	int arr[] = { 100, 50, 20, 10, 5, 1 };
//	int n = 6;
//	int total;
//	cin >> total;
//	int result = solve(total, arr, n);
//	cout << result << endl;
//	return 0;
//}
// _____________________;：A.m = solve(tar + meta[i], meta, metan, seed1, seedn + 1);
// B.m = solve(tar + meta[i], meta, metan, seed1, seedn);
// C.m = solve(tar - meta[i], meta, metan, seed1, seedn);
// D.m = solve(tar - meta[i], meta, metan, seed1, seedn + 1);
#include <iostream>
using namespace std;
int solve(int tar, int * meta, int metan, int * seed = NULL, int seedn = 0)
{
    if (tar == 0)
    {
        return seedn;
    }
    int min = -1;
    int m;
    int * seed1 = new int[seedn + 1];
    if (seed)
        memcpy(seed1, seed, sizeof(int) * seedn);
    for (int i = 0; i < metan; i++)
    {
        if (meta[i] <= tar)
        {
            seed1[seedn] = meta[i];
            m = solve(tar - meta[i], meta, metan, seed1, seedn + 1);
            if (m != -1 && (min == -1 || min > m))
                min = m;
            break;
        }
    }
    delete[] seed1;
    return min;
}
int main()
{
    int arr[] = { 100, 50, 20, 10, 5, 1 };
    int n = 6;
    int total;
    cin >> total;
    int result = solve(total, arr, n);
    cout << result << endl;
    return 0;
}
