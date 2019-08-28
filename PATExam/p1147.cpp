//#include<cstdio>
//#include <vector>
//#include<algorithm>
//using namespace std;
////两块内容,二叉树和堆
////比较简单，思路是:
////以第一个节点作为标准，如果是小顶堆，则值为-1.其余类推
////设定一个变量记录是否改变
//
//int N,M;
//int type = 0;
//vector<int> tree;
//void postshow(int root){
//    //输出后序序列
//    if(root >= N) return;
//    postshow(2*root+1);//输出左节点
//    postshow(2*root+2);
//    printf("%d",tree[root]);
//    if(root != 0) printf(" ");
//}
//
//int main(){
//    scanf("%d%d",&M,&N);
//
//    tree.resize(N);
//
//    for(int i = 0;i<M;i++){
//        for(int j = 0;j<N;j++) scanf("%d",&tree[j]);
//        //判断是否为堆
//        int j;
//        for(j = 0;j<N/2;j++){
//            int lchild = j*2+1;
//            int rchild = j*2+2==N ? lchild:lchild+1;
//            int minOne = min(tree[lchild],tree[rchild]);
//            int maxOne = max(tree[lchild],tree[rchild]);
//
//            if(j == 0){
//                if(tree[0]>tree[1]) type = 1;
//                else type = -1;
//            }else{
//                if(type == 1 && tree[j] <= maxOne) break;
//                if(type == -1&& tree[j] >= minOne) break;
//            }
//        }
//
//        if(j == N/2&&type == 1) printf("%s\n","Max Heap");
//        else if(j == N/2&&type == -1) printf("%s\n","Min Heap");
//        else printf("%s\n","Not Heap");
//
//        postshow(0);
//        printf("\n");
//    }
//
//
//}