//#include <cstdio>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//const int MaxV = 510;
//const int Inf = 0x3fffffff;
//
//int n,m,s,d;
//int G[MaxV][MaxV],dis[MaxV],W[MaxV][MaxV];
//bool vis[MaxV];
//
//vector<int> pre[MaxV],tmp,res;
//int minCost = Inf;
//
//void djkstra(int s){
//    fill(dis,dis+MaxV,Inf);
//    dis[s] = 0;
//    for(int i = 0;i<n;i++){
//        int u = -1;
//        int Min = Inf;
//        for(int j = 0;j<n;j++){
//            if(!vis[j] && dis[j]<Min){
//                Min = dis[j];
//                u = j;
//            }
//        }
//        if(u == -1) return;
//        vis[u] = true;
//        for(int v = 0;v<n;v++){
//            if(G[u][v]!=Inf && !vis[v]){
//                if(G[u][v]+dis[u] < dis[v]){
//                    dis[v] = G[u][v]+dis[u];
//                    pre[v].clear();
//                    pre[v].push_back(u);
//                }else if(G[u][v]+dis[u] == dis[v]){
//                    pre[v].push_back(u);
//                }
//            }
//        }
//
//    }
//}
//
//void dfs(int v){//当前访问节点
//    if(v == s){
//        int sum = 0;
//        tmp.push_back(v);
//        for(int i = tmp.size()-1;i>0;i--){
//            sum += W[tmp[i]][tmp[i-1]];
//        }
//        if(sum < minCost){
//            minCost = sum;
//            res = tmp;
//        }
//        tmp.pop_back();
//        return;
//    }
//    tmp.push_back(v);
//    for(int i = 0;i<pre[v].size();i++){
//        dfs(pre[v][i]);
//    }
//    tmp.pop_back();
//
//}
//
//int main(){
//    scanf("%d%d%d%d",&n,&m,&s,&d);
//    fill(G[0],G[0]+MaxV*MaxV,Inf);
//    fill(W[0],W[0]+MaxV*MaxV,Inf);
//    for(int i = 0;i<m;i++){
//        int c1,c2,d,cost;
//        scanf("%d%d%d%d",&c1,&c2,&d,&cost);
//        G[c1][c2] = d;
//        G[c2][c1] = d;
//        W[c1][c2] = cost;
//        W[c2][c1] = cost;
//    }
//    djkstra(s);
//    dfs(d);
//    for(int i = res.size()-1;i>=0;i--){
//        printf("%d ",res[i]);
//    }
//    printf("%d %d",dis[d],minCost);
//}
