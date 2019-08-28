////AVI 树，也就是二叉平衡树的实现。
////涉及的操作有:
////高度的定义，修改
////左旋，右旋
//struct  treeNode{
//    int data,height;
//    treeNode* lchild;
//    treeNode* rchild;
//};
////左旋
//void L(treeNode* &root){
//    treeNode* tmp = root->rchild;
//    root->rchild = tmp->lchild;
//    tmp->lchild = root;
//    /*
//     * 修改高度
//     * */
//    tmp = root;
//}
//
////右旋
//void R(treeNode* root){
//    treeNode* tmp = root->lchild;
//    root->lchild = tmp->rchild;
//    tmp->rchild = root;
//    tmp = root;
//}
//
