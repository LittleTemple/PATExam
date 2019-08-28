//#include<cstdio>
//#include <vector>
//#include <queue>
//using namespace std;
//
//const int maxn = 1010;
//
//int N,depth;
//vector<int> deep(maxn);
//struct treeNode{
//    int data;
//    int layer;
//    treeNode* lchild;
//    treeNode* rchild;
//};
//
////构建二叉查找树
//void insert(treeNode* &root,int x){
//    if(root == NULL){
//        root = new treeNode;//这里老是容易错,误写成别的节点.应该是根节点
//        root->lchild = root->rchild = NULL;
//        root->data = x;
//        return;
//    }
//
//    if(x > root->data) insert(root->rchild,x);
//    else insert(root->lchild,x);
//}
//
//void levelOrder(treeNode* root){
//    queue<treeNode*> q;
//    q.push(root);
//    root->layer = 0;
//    while(!q.empty()){
//        treeNode* front = q.front();
//        q.pop();
//        depth = front->layer;//不会是这里为null吧
//        deep[depth]++;
//        if(front->lchild != NULL){
//            front->lchild->layer = front->layer+1;
//            q.push(front->lchild);
//        };
//        if(front->rchild != NULL){
//            front->rchild->layer = front->layer+1;
//            q.push(front->rchild);
//    }
//
//    }
//}
//
//
//int main(){
//    scanf("%d",&N);
//    treeNode* root;
//    for(int i = 0;i<N;i++) {
//        int tmp;
//        scanf("%d", &tmp);
//        insert(root, tmp);
//    }
//
//    levelOrder(root);
////    deep.resize(depth+1);
//
////    printf("%d + %d = %d",deep[depth],deep[depth-1],deep[depth]+deep[depth-1]);
//
//
//
//}