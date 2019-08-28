//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int N,K,L;
//const int maxn = 1010;
//struct node{
//    int layer;
//    vector<int> child;
//}nodes[maxn];
//
////进行层次遍历
//int levelOrder(int root){
//    bool vis[maxn] = {false};//准备一个访问矩阵,防止环的发生
//    queue<int> q;
//    int num = 0;
//
//    nodes[root].layer = 0;
//
//    q.push(root);
//    while(!q.empty()){
//        int front = q.front();
//        q.pop();
//        if(nodes[front].layer > L) continue;
//        num++;//这里如果是放在里面的话，更符合逻辑一点
//        vis[front] = true;
//        vector<int> childs = nodes[front].child;
//
//        //出现环的情况
//        //这里需要特别考虑
//        for(auto item:childs){
//            if(!vis[item]){
//                nodes[item].layer = nodes[front].layer+1;
//                vis[item] = true;
//                q.push(item);
//            };
//
//        }
//    }
//    return num;
//
//}
//
//int main(){
//    scanf("%d%d",&N,&L);
//    for(int i = 1;i<=N;i++){
//        int M,tmp;
//        scanf("%d",&M);
//        for(int j = 0;j<M;j++){
//            scanf("%d",&tmp);
//            nodes[tmp].child.push_back(i);
//        }
//    }
//    scanf("%d",&K);
//    for(int i = 0;i<K;i++){
//        int tmp,res;
//        scanf("%d",&tmp);
//        res = levelOrder(tmp);
//        printf("%d\n",res-1);//需要减去根节点
//    }
//}