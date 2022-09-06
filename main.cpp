#include <iostream>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode*& rt, TreeNode* p, TreeNode* q) {

        if((rt->val-p->val)*(rt->val-q->val)<=0) return rt;
        else if( rt->val<p->val&& rt->val< q->val) rt = rt->right;
        else rt = rt->left;
        return lowestCommonAncestor(rt,p,q);
    }
};

int main(int argc, const char * argv[]) {
    Solution t;
    TreeNode root_one = TreeNode(6);
    TreeNode root_two = TreeNode(2);
    TreeNode root_three = TreeNode(0);
    TreeNode root_four = TreeNode(4);
    TreeNode root_five = TreeNode(3);
    TreeNode root_six = TreeNode(5);
    TreeNode root_seven = TreeNode(8);
    TreeNode root_eight = TreeNode(7);
    TreeNode root_nine = TreeNode(9);

    root_one.left = &root_two;
    root_two.left = &root_three;
    root_two.right = &root_four;
    root_four.left = &root_five;
    root_four.right = &root_six;
    root_one.right = &root_seven;
    root_seven.left = &root_eight;
    root_seven.right = &root_nine;

    TreeNode* ptr = &root_one;
    std::cout <<t.lowestCommonAncestor(ptr,&root_two,&root_four)->val;
    return 0;
}
