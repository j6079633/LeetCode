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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL && t2==NULL){
            return NULL;
        }else if(t1==NULL && t2!=NULL){
            return t2;
        }else if(t1!=NULL && t2==NULL){
            return t1;
        }else{
            TreeNode* newt = new TreeNode(t1->val + t2->val);
            newt->left = mergeTrees(t1->left, t2->left);
            newt->right = mergeTrees(t1->right, t2->right);
            return newt;
        }
    }
};
int main(){
    return 0;
}
