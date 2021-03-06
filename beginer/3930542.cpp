// 给定一个二叉树，返回其节点值自底向上的层序遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
//
//例如：
//给定二叉树 [3,9,20,null,null,15,7],
//
//  3
// / \
// 9  20
// /   \
//15   7
//
//
//返回其自底向上的层序遍历为：
//
//[
//[15,7],
//[9,20],
//[3]
//]
//
// Created by 鹄思鹄想_bit森 on 2022/4/29.
//
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> res;
        if (root == NULL)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> oneLevel;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                oneLevel.push_back(node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            res.insert(res.begin(), oneLevel);
        }
        return res;
    }
};
