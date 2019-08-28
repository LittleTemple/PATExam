//#include<cstdio>
//#include<vector>
//using namespace std;
//const int maxn = 50010;
//struct treeNode{
//    int lchild;
//    int rchild;
//}nodes[maxn];
//
//int N,res,tmp;
//vector<int> pre,inOrder,post;
//
//
//void create(int root,int inL,int inR){//代表在序列中的下标
//    if(inL > inR) return;
//    int i = inL;
//    while(i<inR&&pre[root]!=inOrder[i]) i++;
//    int num = i-inL;
//
//    create(root+1,inL,i-1);
//    create(root+num+1,i+1,inR);
//    post.push_back(pre[root]);//存储后序遍历序列,需要逆向输出
//
//}
//
//int main(){
//    scanf("%d",&N);
//    for(int i = 0;i<N;i++){
//        scanf("%d",&tmp);
//        pre.push_back(tmp);
//    }
//
//    for(int i = 0;i<N;i++){
//        scanf("%d",&tmp);
//        inOrder.push_back(tmp);
//    }
//
//    create(0,0,N-1);
//    printf("%d",post[0]);
//
//}
//
