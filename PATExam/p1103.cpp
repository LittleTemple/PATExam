//#include<cstdio>
//#include <algorithm>
//using namespace std;
////删除一个节点后，计算连通图的数量
////使用深度遍历遍历删除节点后的图，得出连通分量的个数,也就是需要的连线数
//const int maxn = 1010;
//int G[maxn][maxn] = {-1};//-1为不可达
//int N,M,K,locA,locB,check;
//bool vis[maxn] = {false};
//
//void dfs(int now){
//    vis[now] = true;
//    for(int i = 1;i<=N;i++){
//        if(!vis[i]&&G[now][i] > 0) dfs(i);
//    }
//}
//int main(){
//    scanf("%d%d%d",&N,&M,&K);
//    for(int i = 0;i<M;i++){
//        scanf("%d%d",&locA,&locB);
//        G[locA][locB] = 1;
//        G[locB][locA] = 1;
//    }
//
//    for(int i = 0;i<K;i++){
//        scanf("%d",&check);
//        fill(vis,vis+maxn,false);
//        vis[check] = true;
//        int res = 0;
//        for(int j = 1;j<=N;j++){
//            if(!vis[j]){
//                res++;
//                dfs(j);
//            }
//        }
//        printf("%d\n",res-1);
//    }
//
//}