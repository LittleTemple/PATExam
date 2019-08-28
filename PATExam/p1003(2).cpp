//#include<cstdio>
//#include <algorithm>
//#include <vector>
//using namespace std;
///*
//   10.4中的内容，关于题目中出现的第二标尺的问题的讲解
//   思路是：
//   先使用迪杰斯特拉算法计算出最短路径
//   在这过程中使用数组，存放所有最短路径的前驱节点，之后计算完最短路径后，统一对第二标尺进行处理。
//   之所以需要如此，是因为使用pre数组，只能存放最优解，存在贪心固有的弊端。
//   因此需要使用深搜
//
//*/
//
//const int MaxV = 510;
//const int Inf = 0x3fffffff;
//
///*
// * 新增部分
// * */
//vector<int> pre[MaxV];
//
//
//int n,m,s,e,G[MaxV][MaxV];
//int dis[MaxV];
//int weight[MaxV],w[MaxV] = {0};
//int num[MaxV] = {0};
//bool vis[MaxV] = {false};
//
//void dijstrak(int s){
//    fill(dis,dis+MaxV,Inf);
//    dis[s] = 0;
//    for(int i = 0;i<n;i++){
//        int u = -1;
//        int Min = Inf;
//        for(int j = 0;j<n;j++){
//            if(!vis[j] && dis[j] < Min){
//                u = j;
//                Min = dis[j];
//            }
//        }
//        if(u == -1) return;
//        vis[u] = true;
//        for(int v = 0;v<n;v++){
//            if(!vis[v] && G[u][v] != Inf){
//                if(G[u][v]+dis[u] < dis[v]) {
//                    dis[v] = dis[u]+G[u][v];
//                    pre[v].clear();
//                    pre[v].push_back(u);
//                }else if(G[u][v]+dis[u] == dis[v]){
//                    pre[v].push_back(u);
//                }
//            }
//        }
//    }
//}
//
//
//int main(){
//    int u,v,l;
//    scanf("%d%d%d%d",&n,&m,&s,&e);
//    fill(G[0],G[0]+MaxV*MaxV,Inf);
//
//    for(int i = 0;i<n;i++){
//        scanf("%d",&weight[i]);
//    }
//
//    w[s] = weight[s];
//    num[s] = 1;
//
//    for(int i = 0;i<m;i++){
//        scanf("%d%d%d",&u,&v,&l);
//        G[u][v] = l;
//        G[v][u] = l;
//    }
//    dijstrak(s);
//    printf("%d %d",num[e],w[e]);
//}
//
