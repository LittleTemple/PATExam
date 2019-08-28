#include<cstdio>
#include <algorithm>
using namespace std;
/*
    先进行分析:
    乍看是最短路径的问题,首先想到迪杰斯特拉算法，第二个想到深搜
    迪杰斯特拉算法的主要是计算所有的点的最小距离,变体可以添加点权，边权，最短路径的个数和最短路径的输出

    见算法笔记10.4
*/

const int MaxV = 510;
const int Inf = 0x3fffffff;

int n,m,s,e,G[MaxV][MaxV];
int dis[MaxV];
int weight[MaxV],w[MaxV] = {0};
int num[MaxV] = {0};
bool vis[MaxV] = {false};

void dijstrak(int s){
    fill(dis,dis+MaxV,Inf);
    dis[s] = 0;
    for(int i = 0;i<n;i++){
        int u = -1;
        int Min = Inf;
        for(int j = 0;j<n;j++){
            if(!vis[j] && dis[j] < Min){
                u = j;
                Min = dis[j];
            }
        }
        if(u == -1) return;
        vis[u] = true;
        for(int v = 0;v<n;v++){
            if(!vis[v] && G[u][v] != Inf){
                if(G[u][v]+dis[u] < dis[v]){
                    dis[v] = G[u][v]+dis[u];
                    w[v] = w[u]+weight[v];
                    num[v] = num[u];
                }else if(G[u][v]+dis[u] == dis[v] ){
                    num[v] += num[u];
                    if(w[u]+weight[v] > w[v]) w[v] = w[u]+weight[v];
                }
            }
        }
    }
}


int main(){
    int u,v,l;
    scanf("%d%d%d%d",&n,&m,&s,&e);
    fill(G[0],G[0]+MaxV*MaxV,Inf);

    for(int i = 0;i<n;i++){
        scanf("%d",&weight[i]);
    }

    w[s] = weight[s];
    num[s] = 1;

    for(int i = 0;i<m;i++){
        scanf("%d%d%d",&u,&v,&l);
        G[u][v] = l;
        G[v][u] = l;
    }
    dijstrak(s);
    printf("%d %d",num[e],w[e]);
}

