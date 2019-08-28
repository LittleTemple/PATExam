////将dfs和树相结合
//#include<cstdio>
//#include <queue>
//using namespace std;
//
////首先需要记住:
////preOrder:前序
////inOrder:中序
////postOrder:后序
////levelOrder:层次遍历
//
//const int maxn = 40;
//int post[maxn],inOrder[maxn];
//int n;
//
//
////首先定义树的结构
//struct node{
//    int data;
//    node* lchild;
//    node* rchild;
//};
//
//node* newNode(int data){
//    node* Node = new node();
//    Node->data = data;
//    Node->lchild = NULL;
//    Node->rchild = NULL;
//    return Node;
//}
//
//node* create(int postL,int postR,int inL,int inR){
//
//    if(postL > postR){//这里填写终止条件
//        return NULL;
//    }
//
//    node* root = new node;
//    root->data = post[postR];//后续遍历的最后一个是对应的根节点
//
////    //在中序序列中找到该根节点
//    int k;
//    for(k = inL;k<=inR;k++){
//        if(inOrder[k] == post[postR]){
//            break;
//        }
//    }
//    int rightNodeNum = inR-k;
//
//    root->lchild = create(postL,postR-rightNodeNum-1,inL,k-1);
//    root->rchild = create(postR-rightNodeNum,postR-1,k+1,inR);
//
//    return root;
//
//}
//
//void showLevel(node* root){
//    queue<node*> q;
//    q.push(root);
//    int flag = 0;
//
//    while(!q.empty()){
//        node* front = q.front();
//        q.pop();
//        if(flag == 0){
//            printf("%d",root->data);
//        } else{
//            printf(" %d",front->data);
//        }
//
//        //这里需要判断左右节点是否为null
//        if(front->lchild != NULL) q.push(front->lchild);
//        if(front->rchild != NULL) q.push(front->rchild);
//        flag++;
//
//    }
//}
//int main(){
//    scanf("%d",&n);
//    for(int i = 0;i<n;i++){
//        scanf("%d",&post[i]);
//    }
//
//    for(int i = 0;i<n;i++){
//        scanf("%d",&inOrder[i]);
//    }
//
//    node* root = create(0,n-1,0,n-1);
//    showLevel(root);
//}