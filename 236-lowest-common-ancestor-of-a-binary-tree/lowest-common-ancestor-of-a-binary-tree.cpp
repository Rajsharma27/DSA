/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root, TreeNode* target, vector<TreeNode*>& path){
        if(!root) return false;

        path.push_back(root);
        if(root==target) return true;

        if(solve(root->left,target,path) || solve(root->right,target,path)){
            return true;
        }
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p_path;
        vector<TreeNode*>q_path;

        solve(root,p,p_path);
        solve(root,q,q_path);

        TreeNode* ans = nullptr;
        int i = 0;

        while(i<p_path.size() && i<q_path.size()){
            if(p_path[i]==q_path[i]){
                ans = p_path[i];
            }
            else{
                break;
            }
            i++;
        }
        return ans;
    }
};