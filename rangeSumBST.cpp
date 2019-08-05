/* Merge a binary search tree*/
#include <iostream>
#include <string>
using namespace std;

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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root != NULL){
            if(L <= root->val && root->val <= R){
                return root->val+rangeSumBST(root->left, L, R)+rangeSumBST(root->right, L, R);
            }else{
                return rangeSumBST(root->left, L, R)+rangeSumBST(root->right, L, R);
            }
        }else{
            return 0;
        }
        
    }
    
};
int main(){
}
