//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxn = 40;
//
//struct treeNode{
//    int data = 0;
//    int layer = 0;
//    int lchild = -1;
//    int rchild = -1;
//}nodes[maxn];
//int N,height,inorder[maxn],post[maxn];
//vector<int> res[maxn];
//
//
//int create(int root,int inL,int inR){//这里的root,需要从最后开始
//    if(inL > inR) return -1;
//    nodes[root].data = post[root];
//    int i = inL;
//    while(i<inR&&inorder[i]!=post[root]) i++;
//    int num = inR-i;//也就是说两个坐标之差就是所要的数目,中序和后序就是root-(num+1),前序和中序就是root+num+1
//    nodes[root].lchild = create(root-num-1,inL,i-1);
//    nodes[root].rchild = create(root-1,i+1,inR);
//
//    return root;
//}
//
//void levelOrder(int root){
//    queue<int> q;
//    nodes[root].layer = 0;
//    q.push(root);
//    while(!q.empty()){
//        int front = q.front();
//        height = nodes[front].layer;
//        res[height].push_back(nodes[front].data);
//        q.pop();
//        int left = nodes[front].lchild;
//        int right = nodes[front].rchild;
//
//        nodes[right].layer = nodes[left].layer = nodes[front].layer+1;
//
//        if(left != -1)  q.push(left);
//        if(right != -1) q.push(right);
//    }
//}
//
//
//int main(){
//    scanf("%d",&N);
//    for(int i = 0;i<N;i++) scanf("%d",&inorder[i]);
//    for(int i = 0;i<N;i++) scanf("%d",&post[i]);
//    create(N-1,0,N-1);
//    levelOrder(N-1);
//
//    printf("%d",res[0][0]);
//    for(int i = 1;i<=height;i++){
//        vector<int> floor = res[i];
//        if(i%2 == 1) {
//            for(int j = 0;j<floor.size();j++)
//                printf(" %d",floor[j]);
//        }else{
//            for(int j = floor.size()-1;j>=0;j--)
//                printf(" %d",floor[j]);
//        }
//
//    }
//
//
//
//}