////#include<cstdio>
////#include<vector>
////using namespace std;
//////最好可以使用数组的方式来存储
//////根据先序遍历和二叉查找树的性质,构建二叉树
//////在包含二叉查找树的情况下，应该怎么去解呢?
//////见p1086，怎么控制好输出的边界呢
////const int maxn = 10010;
////struct treeNode{
////    int lchild;
////    int rchild;
////    vector<int> parent;
////}nodes[maxn];
////
////int N,M,data;//M是对数，N是节点数
////vector<int> arr;
////
////int create(int start,int end){
////    if(start > end) return -1;
////    //首先创建根节点
////    int root = arr[start];//这个root是根节点的值，同时也是根节点的下标
////    //遍历前序数组，查找分界点
////    int i = start;
////    while(i<=end&&arr[i]<=root) i++; //注意这里终止条件的含义，arr[i]<=root,指找到大于root的值为止，没有找到可能会死循环
////
////    //创建左子树
////    nodes[root].lchild = create(start+1,i-1);
////    //创建右子树
////    nodes[root].rchild = create(i,end);
////    return root;
////}
////
////void preOrder(int root){
////    if(root == -1) return;
////    int left = nodes[root].lchild;
////    int right = nodes[root].rchild;
////    nodes[left].parent.push_back(root);
////    nodes[right].parent.push_back(root);
////
////    preOrder(nodes[root].lchild);
////    preOrder(nodes[root].rchild);
////}
////
////int main(){
////    scanf("%d%d",&M,&N);
////    for(int i = 0;i<N;i++){
////        scanf("%d",&data);
////        arr.push_back(data);
////    }
////    int u,v;
//////    for(int i = 0;i<M;i++){
//////        scanf("%d%d",&u,&v);
//////
//////    }
////
////    create(0,N-1);
////    preOrder(arr[0]);
////
////
////
////
////
////
////}
//#include<cstdio>
//#include<map>
//#include<vector>
//using namespace std;
////虽然是树的题目，但是不一定要构建树，使用树的知识做出来就行
//map<int,bool> flag;
//
//int main(){
//    int m,n,u,v,a;
//
//    scanf("%d%d",&m,&n);
//    vector<int> pre(n);
//    for(int i = 0;i<n;i++){
//        scanf("%d",&pre[i]);
//        flag[pre[i]] = true;
//    }
//
//    for (int i = 0; i < m; i++) {
//        scanf("%d %d", &u, &v);
//        for(int j = 0; j < n; j++) {
//            a = pre[j];
//            if ((a >= u && a <= v) || (a >= v && a <= u)) break;
//        }
//        if (flag[u] == false && flag[v] == false)
//            printf("ERROR: %d and %d are not found.\n", u, v);
//        else if (flag[u] == false || flag[v] == false)
//            printf("ERROR: %d is not found.\n", flag[u] == false ? u : v);
//        else if (a == u || a == v)
//            printf("%d is an ancestor of %d.\n", a, a == u ? v : u);
//        else
//            printf("LCA of %d and %d is %d.\n", u, v, a);
//    }
//    return 0;
//
//
//
//}