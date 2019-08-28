////题目大意，判断是否为红黑树
///*
//    思路   :根据先序遍历构建红黑树.红黑树一定是二叉查找树
//    1.根据先序遍历构造二叉树先。(ok)
//    2.之后进行判断(是否满足前面的条件)
//*/
//
//#include<cstdio>
//#include<vector>
//using namespace std;
//const int maxn = 50;
//
//struct treeNode{
//    int data;
//    treeNode* l;
//    treeNode* r;
//};
//
//int K,N;
//vector<int> tree;
//
//void insert(treeNode* &root,int x){
//
//    if(root == NULL){
//        root = new treeNode;
//        root->data = x;
//        root->l = root->r = NULL;
//        return;
//    }
//    if(abs(x) > abs(root->data)) insert(root->r,x);
//    else insert(root->l,x);
//}
//
////先序遍历构建数组
//treeNode* create(){
//    treeNode* root = NULL;
//    for(int i = 0;i<N;i++){
//        insert(root,tree[i]);
//    }
//    return root;
//}
//
//
//
//bool isNodeOk(treeNode* root){
//    if(root == NULL) return true;
//    if(tree[0] < 0) return false;
//    if(root->data < 0){
//        if(root->l&&root->l->data<0) return false;
//        if(root->r&&root->r->data<0) return false;
//    }
//    return isNodeOk(root->l)&&isNodeOk(root->r);
//}
//
//int getLen(treeNode* root){
//    if(root == NULL) return 0;
//    int len = 0;
//    if(root->data > 0) len = 1;
//    return max(getLen(root->l),getLen(root->r))+len;
//}
//
//void show(treeNode* root){
//    if(root == NULL) return;
//
//    show(root->l);
//    printf("%d ",root->data);
//    show(root->r);
//
//}
//bool isLenOk(treeNode* root){
//    if(root == NULL) return true;
//    int l = getLen(root->l);
//    int r = getLen(root->r);
//    if(l != r) return false;
//    return isLenOk(root->l)&&isLenOk(root->r);
//}
//
//
//int main(){
//    scanf("%d",&K);
//    for(int i = 0;i<K;i++){
//        scanf("%d",&N);
//        tree.clear();
//        tree.resize(N);
//
//        for(int j = 0;j<N;j++){
//            scanf("%d",&tree[j]);
//        }
//
//        treeNode* root = NULL;
//        root = create();
//        printf("%s\n",isNodeOk(root)&&isLenOk(root) ? "Yes":"No");
//    }
//}