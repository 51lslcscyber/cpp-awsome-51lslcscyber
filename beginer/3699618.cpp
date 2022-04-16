//
// Created by 鹄思鹄想_bit森  on 2022/4/15.
//给定一个非负整数数组，你最初位于数组的第一个位置。
//
//数组中的每个元素代表你在该位置可以跳跃的最大长度。
//
//你的目标是使用最少的跳跃次数到达数组的最后一个位置。
//
//示例:
//
//输入: [2,3,1,1,4]
//输出: 2
//解释: 跳到最后一个位置的最小跳跃数是 2。从下标为 0 跳到下标为 1 的位置，跳 1 步，然后跳 3 步到达数组的最后一个位置。
//
//说明:
//
//假设你总是可以到达数组的最后一个位置。
//
//以下程序实现了这一功能，请你填补空白处内容：

//for (int i = lo; i <= hi; i++)
//{
//right = max(i + nums[i], right);
//}
//lo = hi + 1;

//for (int i = lo; i <= hi; i++)
//{
//right = max(nums[i], right);
//}
//lo = hi - 1;

//for (int i = lo; i <= hi; i++)
//{
//right = max(nums[i], right);
//}
//lo = hi + 1;

#include <bits/stdc++.h>
using namespace std;
int main(){

};
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int steps = 0;
        int lo = 0, hi = 0;
        while (hi < nums.size() - 1)
        {
            int right = 0;
//            for (int i = lo; i <= hi; i++)
//            {
//                right = max(i + nums[i], right);
//            }
//            lo = hi - 1;
            hi = right;
            steps++;
        }
        return steps;
    }
};

