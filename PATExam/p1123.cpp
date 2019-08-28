//#include<cstdio>
//#include <algorithm>
//#include<queue>
//#include <cmath>
//#include <vector>
//using namespace std;
//struct treeNode{
//    int height;
//    int data;
//    int layer = 0;
//    treeNode* lchild;
//    treeNode* rchild;
//};
//const int maxn = 30;
//int arr[maxn];
//int N,wholeLayer = 0;
//vector<treeNode*> list[maxn];
//
//treeNode* newNode(int v){
//    treeNode* node = new treeNode;
//    node->lchild = node->rchild = NULL;
//    node->height = 1;
//    node->data = v;
//    return node;
//}
//
//int getHeight(treeNode* root){
//    if(root == NULL) return 0;//空树返回0
//    return root->height;
//}
//int getBalance(treeNode* root){
//    return getHeight(root->lchild)-getHeight(root->rchild);
//}
//
//void updateHeight(treeNode* root){
//    root->height = max(getHeight(root->lchild),getHeight(root->rchild))+1;
//}
//
////左旋，找右节点
//void L(treeNode* &root){
//    treeNode* tmp = root->rchild;
//    root->rchild = tmp->lchild;
//    tmp->lchild = root;
//    updateHeight(root);
//    updateHeight(tmp);
//    root = tmp;
//}
//
////右旋,找左节点
//void R(treeNode* &root){
//    treeNode* tmp = root->lchild;
//    root->lchild = tmp->rchild;
//    tmp->rchild = root;
//    updateHeight(root);
//    updateHeight(tmp);
//    root = tmp;
//}
//
////插入操作
//void insert(treeNode* &root,int v){
//    if(root == NULL){
//        root = newNode(v);
//        return;
//    }
//
//    if(v < root->data){
//        insert(root->lchild,v);
//        updateHeight(root);
//        if(getBalance(root) == 2){
//            if(getBalance(root->lchild)== 1){
//                R(root);
//            }else if(getBalance(root->lchild) == -1){
//                L(root->lchild);
//                R(root);
//            }
//        }
//    }else{
//        insert(root->rchild,v);
//        updateHeight(root);
//        if(getBalance(root) == -2){
//            if(getBalance(root->rchild) == -1){
//                L(root);
//            } else if(getBalance(root->rchild) == 1){
//                R(root->rchild);
//                L(root);
//            }
//        }
//    }
//}
//
////创建树
//treeNode* create(int data[],int n){
//    treeNode* root = NULL;
//
//    for (int i = 0; i < n; ++i) {
//        insert(root,data[i]);
//    }
//    return root;
//}
//
////层次遍历
//int num = 0;
//void levelOrder(treeNode* root,int N){
//    queue<treeNode*> q;
//    q.push(root);
//    root->layer = 0;
//    while(!q.empty()){
//        treeNode* front = q.front();
//        q.pop();
//        num++;
//        list[front->layer].push_back(front);
//        wholeLayer = front->layer;
//        printf("%d",front->data);
//        if(num < N) printf(" ");
//        if(front->lchild){
//            front->lchild->layer = front->layer+1;
//            q.push(front->lchild);
//        }
//        if(front->rchild) {
//            front->rchild->layer = front->layer+1;
//            q.push(front->rchild);
//        }
//
//
//    }
//}
//
//
//
//int main(){
//
//    bool flag = true;
//    scanf("%d",&N);
//    if(N == 0) return  0;
//    for(int i = 0;i<N;i++){
//        scanf("%d",&arr[i]);
//    }
//    treeNode* root = create(arr,N);
//    if(root == NULL) printf("error");
//
//    levelOrder(root,N);
//    vector<treeNode*> bottom = list[wholeLayer-1];
//    for (int i = 0; i < bottom.size(); ++i) {
//        if(i != bottom.size()-1){
//            if(!bottom[i]->lchild) {
//                flag = false;
//                break;
//            }
//            if(!bottom[i]->rchild) {
//                flag = false;
//                break;
//            }
//        }
//    }
//    printf("\n%s",flag ?"YES":"NO");
//}