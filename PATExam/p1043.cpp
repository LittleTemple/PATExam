//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#include <cmath>
//using namespace std;
////三种遍历方式的转化
////其实没有用到二叉查找树的多少知识，只是用到了一些性质
//const int maxn = 1010;
////考察知识点，根据先序遍历构建树，中序遍历，后序遍历
//struct treeNode{
//    int data;
//    treeNode* lchild;
//    treeNode* rchild;
//};
//
//int N;
//vector<int> pre,preM,post,postM,orign;
//
//void insert(treeNode* &root,int x){
//    if(root == NULL){
//        root = new treeNode;
//        root->data = x;
//        root->lchild = root->rchild = NULL;
//        return;
//    }
//
//    if(x >= root->data) insert(root->rchild,x);
//    else insert(root->lchild,x);
//}
//
//
//void preOrder(treeNode* root,vector<int> &vis){
//    if(root == NULL) return;
//    vis.push_back(root->data);
//
//    preOrder(root->lchild,vis);
//    preOrder(root->rchild,vis);
//}
//
//void preOrderMirror(treeNode* root,vector<int> &vis){
//    if(root == NULL) return;
//    vis.push_back(root->data);
//    preOrderMirror(root->rchild,vis);
//    preOrderMirror(root->lchild,vis);
//}
//
//void postOrder(treeNode* root,vector<int> &vis){
//    if(root == NULL) return;
//    postOrder(root->lchild,vis);
//    postOrder(root->rchild,vis);
//    vis.push_back(root->data);
//}
//
//void postOrderMirror(treeNode* root,vector<int> &vis){
//    if(root == NULL) return;
//    postOrderMirror(root->rchild,vis);
//    postOrderMirror(root->lchild,vis);
//    vis.push_back(root->data);
//}
//
//
//int main(){
//    int data;
//    scanf("%d",&N);
//    treeNode* root = NULL;
//    for(int i = 0;i<N;i++){
//        scanf("%d",&data);
//        orign.push_back(data);
//        insert(root,data);
//    }
//
//    preOrder(root,pre);
//    preOrderMirror(root,preM);
//    postOrder(root,post);
//    postOrderMirror(root,postM);
//
//
//
//    if(orign == pre){
//        printf("YES\n");
//        for (int i = 0; i < post.size(); ++i) {
//            printf("%d",post[i]);
//            if(i < post.size()-1) printf(" ");
//        }
//    }else if(orign == preM){
//        printf("YES\n");
//        for (int i = 0; i < postM.size(); ++i) {
//            printf("%d",postM[i]);
//            if(i < postM.size()-1) printf(" ");
//        }
//    }else{
//        printf("NO\n");
//    }
//}