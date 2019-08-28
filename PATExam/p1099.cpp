//#include<cstdio>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//const int maxn = 110;
////使用一个数组来存储
//struct treeNode{
//    int lchild;
//    int rchild;
//    int data;//该节点的值
//}nodes[maxn];
//
//int N;
//
////数组版的中序遍历
//void inOrder(int root,vector<int> &vis){
//    if(root == -1) return;
//    inOrder(nodes[root].lchild,vis);
//    vis.push_back(root);
//    inOrder(nodes[root].rchild,vis);
//}
//
////进行层次遍历
//void levelOrder(int root,int N){
//    queue<int> q;
//    q.push(root);
//    while(!q.empty()){
//
//        int front = q.front();
//        printf("%d",nodes[front].data);
//        if(N > 1) printf(" ");
//        q.pop();
//        N--;
//        if(nodes[front].lchild != -1)  q.push(nodes[front].lchild);
//        if(nodes[front].rchild != -1)  q.push(nodes[front].rchild);
//
//    }
//}
//
//
//int main(){
//    int left,right,d,loc;
//    scanf("%d",&N);
//    vector<int> inorder,datas;
//
//    for(int i = 0;i<N;i++){
//        scanf("%d %d",&left,&right);
//        nodes[i].lchild = left;
//        nodes[i].rchild = right;
//    }
//    for(int i = 0;i<N;i++){
//        scanf("%d",&d);
//        datas.push_back(d);
//    }
//
//    inOrder(0,inorder);
//    sort(datas.begin(),datas.end());
//    for(int i = 0;i<N;i++){
//        loc = inorder[i];
//        nodes[loc].data = datas[i];
//    }
//    levelOrder(0,N);
//    return 0;
//
//
//
//
//
//
//}