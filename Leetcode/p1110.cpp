#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
         int val;
        TreeNode *left;
        TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<TreeNode*> res;
queue<TreeNode*> q;
//单次dfs
void dfs(TreeNode* &root,vector<int> to_del,vector<TreeNode*> &path){
    if(root == NULL) return;
    for(auto item:to_del){
        if(item == root->val){//将左右非空节点加入到队列中
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
            root->left = NULL;
            root->right = NULL;
            return;
        }
    }
    path.push_back(root);
    if(root->left) dfs(root->left,to_del,path);
    if(root->right) dfs(root->right,to_del,path);
}

vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
    vector<TreeNode*> path;
    q.push(root);
    while(!q.empty()){
        TreeNode* front = q.front();
        dfs(front,to_delete,path);
        for(auto item:path) res.push_back(item);
    }
    return res;
}

int main(){
    TreeNode
}
