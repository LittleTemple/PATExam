//#include<cstdio>
//#include<vector>
//#include<cmath>
//using namespace std;
////只有一个问题节点，吓死我了.
////很明显，单源最短路径问题。使用dfs或者是迪杰斯特拉算法.
////属于迪杰斯特拉的变体,含有第二权值点权
////只有500个节点,使用邻接图的方式存储
//const int inf = 1e8;
//const int maxn = 1010;
//int G[maxn][maxn] = {inf};
//int Cmax,N,Sp,M,MinNeed = inf,MinRemain = inf;//Cmax站点最大容量，N站点个数,Sp问题节点,M道路个数
//int d[maxn] = {inf},nodes[maxn];//记录从原点到目标点的最小距离
//bool vis[maxn] = {false};//访问数组，用来对当前下标是否访问进行标记
//vector<int> tmpPath,res; //记忆化搜索，记录当前的最短路径.方便进行第二权值的对比
//vector<int> pre[maxn];//设定前驱数组
//
//void Dj(int start){
//    fill(d,d+maxn,inf);//这里只能够用这个进行赋值
//    d[start] = 0;
//    for(int i = 0;i<=N;i++){// 遍历N次
//        int u = -1,Min = inf;
//        for(int j = 0;j<=N;j++){//遍历所有能够到达的，未被访问的节点。找到最小的那个
//            if(!vis[j]&&d[j]<Min){//这里还是不熟练
//                    u = j;
//                    Min = d[j];
//            }
//        }
//        if(u == -1) return;//没有可访问的点
//        vis[u] = true;
//        // d[u] = Min;//这里是不是少了一句??
//        //不会少，因为根节点的时候更新过了
//        for(int v = 0;v<=N;v++){//查看是否可以通过u为中介点，让其中某个点的距离变小
//            if(!vis[v]&&G[u][v]!=inf){
//                if(d[v]>G[u][v]+d[u]){
//                    d[v] = G[u][v]+d[u];
//                    pre[v].clear();
//                    pre[v].push_back(u);//为什么不可以是后继数组呢?
//                }else if(d[v] == G[u][v]+d[u]){
//                    pre[v].push_back(u);
//                }
//            }
//        }
//   }
//
//}
//
////使用dfs,遍历pre数组
//void dfs(int now){//首次传入的为出现问题的下标
//    //终止条件
//    if(now == 0){
//        tmpPath.push_back(now);
//        int need = 0,remain = 0;
//        for(int i = tmpPath.size()-1;i>=0;i--){//这里必须逆序输出
//            int id = tmpPath[i];
//            if(nodes[id] > 0) remain += nodes[id];
//            else{
//                if(remain > abs(nodes[id]))
//                    remain -= abs(nodes[id]);
//                else{
//                    need += abs(nodes[id])-remain;
//                    remain = 0;
//                }
//            }
//        }
//        if(need < MinNeed){
//            MinNeed = need;
//            MinRemain = remain;
//            res = tmpPath;
//        }else if(need == MinNeed && remain < MinRemain){
//            MinRemain = remain;
//            res = tmpPath;
//        }
//        tmpPath.pop_back();
//        return;
//    }
//    tmpPath.push_back(now);
//    for(int i = 0;i<pre[now].size();i++){
//       dfs(pre[now][i]);
//    }
//    tmpPath.pop_back();
//}
//
//int main(){
//    scanf("%d%d%d%d",&Cmax,&N,&Sp,&M);
//    fill(G[0],G[0]+maxn*maxn,inf);//这里必须要使用这个进行赋值。否则会出错
//    for(int i = 1;i<=N;i++){
//        scanf("%d",&nodes[i]);
//        nodes[i] -= Cmax/2;
//    }
//    for(int i = 0;i<M;i++){
//        int u,v;
//        scanf("%d%d",&u,&v);
//        scanf("%d",&G[u][v]);
//        G[v][u] = G[u][v];
//    }
//
//    Dj(0);
//
//
//    dfs(Sp);
//    for(auto item:tmpPath) printf("%d",item);
//    printf("%d ",MinNeed);
//    for(int i = res.size()-1;i>=0;i--){
//        printf("%d",res[i]);
//        if(i > 0) printf("->");
//    }
//    printf(" %d",MinRemain);
//
//}
//
