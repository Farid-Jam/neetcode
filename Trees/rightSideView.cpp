/* You are given the root of a binary tree. Return only the values of the nodes 
that are visible from the right side of the tree, ordered from top to bottom. */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            TreeNode* rightSide = nullptr;
            int qLen = q.size();
            for (int i = 0; i < qLen; i++){
                TreeNode* node = q.front();
                q.pop();
                if (node){
                    rightSide = node;
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if (rightSide){
                res.push_back(rightSide->val);
            }
        }
        return res;
    }
};
