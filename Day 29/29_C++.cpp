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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans=root;
        while (root!=NULL){
            if(root -> val < val){
                if(root -> right == NULL){
                    root -> right = new TreeNode(val);
                    return ans;
                }else{
                    root=root -> right;
                }
            }else{
                if(root -> left == NULL){
                    root-> left = new TreeNode(val);
                    return ans;
                }else{
                    root = root-> left;
                }
            }
        }
        return ans;
    }
};