//
// Created by 鹄思鹄想_bit森 on 2022/4/16.
//给定一个非空字符串 s 和一个包含非空单词列表的字典 wordDict，在字符串中增加空格来构建一个句子，使得句子中所有的单词都在词典中。返回所有这些可能的句子。
//
//说明：
//
//分隔时可以重复使用字典中的单词。
//你可以假设字典中没有重复的单词。
//
//示例 1：
//
//输入:
//s = "
//catsanddog
//"
//wordDict =
//["cat", "cats", "and", "sand", "dog"]
//
//输出:
//
//[
//  "cats and dog",
//  "cat sand dog"
//]
//
//
//
//示例 2：
//
//输入:
//s = "pineapplepenapple"
//wordDict = ["apple", "pen", "applepen", "pine", "pineapple"]
//输出:
//[
//  "pine apple pen apple",
//  "pineapple pen apple",
//  "pine applepen apple"
//]
//解释: 注意你可以重复使用字典中的单词。
//
//
//示例 3：
//
//输入:
//s = "catsandog"
//wordDict = ["cats", "dog", "sand", "and", "cat"]
//输出:
//[]
#include <bits/stdc++.h>
using namespace std;
int main(){

}
class Solution
{
public:
    vector<string> res;
    unordered_set<string> wordset;
    unordered_set<int> lenset;
    vector<string> wordBreak(string s, vector<string> &wordDict)
    {
        for (const auto &w : wordDict)
        {
            wordset.insert(w);
            lenset.insert(w.size());
        }
        vector<int> dp(s.size() + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= s.size(); ++i)
        {
            for (const auto &j : lenset)
            {
                if (i >= j && dp[i - j] && wordset.count(s.substr(i - j, j)))
                    dp[i] = 1;
            }
        }
        if (dp.back() == 0)
            return res;
        backtrack(dp, 0, s, "");
        return res;
    }
    void backtrack(vector<int> &dp, int idx, string &s, string tmp)
    {
        if (idx == s.size())
        {
            tmp.pop_back();
            res.push_back(tmp);
            return;
        }
        for (int i = idx + 1; i < dp.size(); ++i)
        {
            if (dp[i] == 1 && wordset.count(s.substr(idx, i - idx)))
            {
                backtrack(dp, i, s, tmp + s.substr(idx, i - idx) + " ");
            }
        }
    }
};
