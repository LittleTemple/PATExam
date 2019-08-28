////开始时间13:00
//#include<iostream>
//#include<map>
//#include <cmath>
//#include<vector>
//using namespace std;
////因为需要输出路线，而且因为不满足最优子结构，所以必须使用pre数组
////因为是单源的，所以使用迪杰斯特拉算法+dfs即可
////除此之外，还需要进行string和int类型的转化
////个数不超过200,所以使用邻接图的方式存储
//const int maxn = 300;
//const int inf = 1e8;
//int N,K,ind = 0,scityIndex,endIndex,maxHappy = -1,routes = 0;//N为城市的个数,K为道路的个数.
//double avgHappy = -1;
//int G[maxn][maxn],d[maxn] = {inf},w[maxn] = {0};//ind表示城市的下标从0开始,w表示点权，也就是快乐值
//bool vis[maxn] = {false};
//string scity;//开始城市
//vector<int> tmpPath,path;
//vector<int> pre[maxn];
//map<string,int> nameToId;
//map<int,string> idToName;
//
//int change(string str){
//    if(nameToId.find(str)!=nameToId.end()){
//        return nameToId[str];
//    }else{
//        if(str == scity) scityIndex = ind;
//        nameToId[str] = ind;
//        idToName[ind] = str;
//        ind++;
//        return nameToId[str];
//    }
//}
//
//void dj(int s){
//    d[s] = 0;
//    for(int i = 0;i<N;i++){
//        int u = -1,MIN = inf;
//        for(int j = 0;j<ind;j++){//遍历所有节点，这里注意这里ind
//            if(!vis[j]&&d[j]<MIN){
//                MIN = d[j];
//                u = j;
//            }
//        }
//        if(u == -1) return;
//        vis[u] = true;
//        for(int v = 0;v<ind;v++){
//            if(!vis[v]&&G[u][v]!=inf){
//                if(d[u]+G[u][v] < d[v]){
//                    d[v] = d[u]+G[u][v];
//                    pre[v].clear();
//                    pre[v].push_back(u);
//                }else if(d[u]+G[u][v] == d[v]){
//                    pre[v].push_back(u);
//                }
//            }
//        }
//    }
//
//
//}
//
//
////通过dfs,遍历所有的最短路径找到答案
//void dfs(int s,int num,int happy){//这里的num初始值应该为1
//    if(s == scityIndex){
//
//        routes++;
//        if(happy > maxHappy){
//            path = tmpPath;
//            maxHappy = happy;
//            avgHappy = (happy*1.0)/num;
//        }else if(happy == maxHappy){
//            if((happy*1.0)/num> avgHappy){
//                path = tmpPath;
//                avgHappy = (happy*1.0)/num;
//            }
//        }
//        return;
//    }
//
//    for(int i = 0;i<pre[s].size();i++){
//        int p = pre[s][i];
//        tmpPath.push_back(p);//这里只记录了所有的前驱节点的happy值,没有当前节点的。所以下面需要加上
//        dfs(p,num+1,happy+w[p]);
//        tmpPath.pop_back();
//    }
//}
//
////开始主函数
//int main(){
//    fill(vis,vis+maxn,false);
//    fill(d,d+maxn,inf);
//    fill(G[0],G[0]+maxn*maxn,inf);//没有对G进行赋值
//    cin>>N>>K>>scity;
//    change(scity);//输入起始城市
//    for(int i = 0;i<N-1;i++){
//        string c;
//        int happy,cid;
//        cin>>c>>happy;
//        cid = change(c);
//        w[cid] = happy;
//    }
//
//    for(int i = 0;i<K;i++){
//        string c1,c2;
//        int cost,i1,i2;
//        cin>>c1>>c2>>cost;
//        i1 = change(c1);
//        i2 = change(c2);
//        G[i1][i2] = G[i2][i1] = cost;
//    }
//
//
//    endIndex = nameToId["ROM"];
//    dj(scityIndex);
//
//
//    dfs(endIndex,0,w[endIndex]);
//    printf("%d %d %d %.f\n",routes,d[endIndex],maxHappy,floor(avgHappy));
//
//
//    for(int i = path.size()-1;i>=0;i--){
//        printf("%s",idToName[path[i]].c_str());
//        printf("->");
//    }
//    printf("ROM");
//    return 0;
//
//}