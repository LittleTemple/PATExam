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
    // bool ans = true;
    // void getAns(TreeNode* p, TreeNode* q){
    //     if(p == NULL){
    //         if(q == NULL){
    //             return;
    //         }else{
    //             ans = false;
    //             return;
    //         }
    //     }else{
    //         if(q == NULL){
    //             ans = false;
    //             return;
    //         }else{
    //             if(q->val != p->val){
    //                 ans = false;
    //                 return;
    //             }
    //             getAns(p->left,q->left);
    //             getAns(p->right,q->right);
    //         }
    //     }
    // }
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if(p == NULL || q == NULL) return p == q;//用p == q来表示两个是不是都是NULL。完美
//        return (p->val == q->val
//                && isSameTree(p->left, q->left)
//                && isSameTree(p->right, q->right));
//    }
};