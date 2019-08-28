//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//const int maxn = 2010;
//
//
////首先使用map来存储姓名到id之间的转化
//map<string,int> nameToId;
//map<int,string> IdToName;
//map<string,int> gangs;
//int N,K;
//int numPerson = 0;//总人数
////还需要一个代表着连通块边权之和的数组,可以在之后体现
//
////创建邻接矩阵
//int G[maxn][maxn] = {-1};//设定初值为-1,表示不可达
//int nodeValue[maxn] = {0};//设定所有节点的点权
//bool vis[maxn] = {false};//设定访问
//
////设定转化函数
//int tranmit(string str) {
//    if (nameToId.find(str) != nameToId.end()) {
//        return nameToId[str];
//    } else {
//        nameToId[str] = numPerson;
//        IdToName[numPerson] = str;
//        numPerson++;
//        return nameToId[str];
//    }
//}
//
////进行深度遍历,同时返回该连通块的最大边权值，成员数,头目的id值
//void dfs(int now,int &maxValue,int &numMember,int &head){
//    vis[now] = true;//将该点设定为访问
//    numMember++;
//    if(nodeValue[now] > nodeValue[head]) head = now;
//
//    for(int i = 0;i<numPerson;i++){
//        //使用这里会产生漏边的情况
////        if(G[now][i]>0&&!vis[i]) maxValue += G[now][i];
//            if(G[now][i]>0) {
//                maxValue += G[now][i];//加上边权
//                G[now][i] = G[i][now] =  -1;//删除当前边,不管有没有遍历过都要删
//                if(!vis[i]) dfs(i,maxValue,numMember,head);
//            }
//
//    }
//}
//
////遍历图
//void dfsTrave(){
//    for(int i = 0;i<numPerson;i++){//遍历所有节点
//        if(!vis[i]){
//            int head = i,maxValue = 0,numMember = 0;
//            dfs(i,maxValue,numMember,head);
//            if(maxValue > K&&numMember>2) gangs[IdToName[head]] = numMember;
//        }
//    }
//}
//
//
//int main(){
//    cin>>N>>K;
//    for(int i = 0;i<N;i++){
//        string p1,p2;
//        int weight;
//        cin>>p1>>p2>>weight;
//        //设定点权
//        int p1Id = tranmit(p1);
//        int p2Id = tranmit(p2);
//        nodeValue[p1Id] += weight;
//        nodeValue[p2Id] += weight;
//
//        //设定邻接表
////        G[p1Id][p2Id] = weight;//这样设定的话就是使用有向图的方式解，需要修改line44，删除左右节点
//        G[p1Id][p2Id] += weight;
//        G[p2Id][p1Id] += weight;//这是使用无向图的方式,遍历时需要删除需要将两个节点同时删除.也就相当于一个节点了
//
//    }
//    dfsTrave();
//    cout<<gangs.size()<<endl;
//    for(auto item:gangs){
//        cout<<item.first<<" "<<item.second<<endl;
//    }
//    return 0;
//}
