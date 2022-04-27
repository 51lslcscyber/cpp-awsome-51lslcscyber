//
// Created by 鹄思鹄想_bit森 on 2022/4/15.
//给定一个 完美二叉树 ，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下：
//
//struct Node {
//int val;
//Node *left;
//Node *right;
//Node *next;
//}
//
//填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。
//
//初始状态下，所有 next 指针都被设置为 NULL。
//
// 
//
//进阶：
//
//你只能使用常量级额外空间。
//使用递归解题也符合要求，本题中递归程序占用的栈空间不算做额外的空间复杂度。
//
// 
//
//示例：
//
//输入：root = [1,2,3,4,5,6,7]
//输出：[1,#,2,3,#,4,5,6,7,#]
//解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B 所示。序列化的输出按层序遍历排列，同一层节点由 next 指针连接，'#' 标志着每一层的结束。
//
//图片地址：https://assets.leetcode.com/uploads/2019/02/14/116_sample.png
// 
//
//提示：
//
//树中节点的数量少于 4096
//-1000 <= node.val <= 1000
#include <bits/stdc++.h>
using namespace std;
int main(){

};
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;
    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
    Node(int _val, Node *_left, Node *_right, Node *_next)
            : val(_val), left(_left), right(_right), next(_next) {}
};
class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root)
            return nullptr;
        root->next = nullptr;
        connect_helper(root);
        return root;
    }
private:
    void connect_helper(Node *pNode)
    {
        if (!pNode)
            return;
        if (pNode->left == nullptr)
            return;
        pNode->left->next = pNode->right;
        if (pNode->right == nullptr)
            return;
        if (pNode->next != nullptr)
            pNode->right->next = pNode->next->left;
        else
            pNode->right->next = nullptr;
        connect_helper(pNode->left);
        connect_helper(pNode->right);
    }
};
