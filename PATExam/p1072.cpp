//#include<iostream>
//#include<string>
//#include<vector>
//#include <cmath>
//#include<map>
//using namespace std;
////也不算是全源，因为只有最多10个备选点。所以可以通过遍历的方式，遍历一遍。也就是单源了.
////不满足最优子结构，所以还是需要遍历
//const int maxn = 1100;
//const int inf = 1e6;
//int G[maxn][maxn],d[maxn];
//int N,M,K,Ds,ind = 1,Dist,resIndex = -1;//N房屋的个数,M备选点的个数,K道路数,Ds最大服务长度
//double minDis = -1.0,avgDis = inf*1.0;
//bool vis[maxn] = {false};
//bool isGug[maxn] = {false};
//string p1,p2;
//map<string,int> NameToId;
//map<int,string> IdToName;
//vector<int> Gug;
//
//
//int change(string str){
//    if(NameToId.find(str)!=NameToId.end()){
//        return NameToId[str];
//    }else{
//        if(str[0] == 'G'){
//            Gug.push_back(ind);
//            isGug[ind] = true;
//        };
//        NameToId[str] = ind;
//        IdToName[ind] = str;
//        ind++;
//        return NameToId[str];
//    }
//}
//
//void Dj(int s){
//    fill(d,d+maxn,inf);
//    fill(vis,vis+maxn,false);
//    d[s] = 0;
//
//    //结束所有的遍历
//    for(int i = 0;i<N;i++){
//        int u = -1,MIN = inf;
//        for(int j = 1;j<=ind;j++){
//            if(!vis[j]&&d[j]<MIN){
//                u = j;
//                MIN = d[j];
//            }
//        }
//        if(u == -1) return;
//        vis[u] = true;
//        for(int v = 1;v<=ind;v++){
//            if(!vis[v]&&G[u][v]!=inf){
//                if(d[v] > G[u][v]+d[u]){
//                    d[v] = G[u][v]+d[u];
//                }
//            }
//        }
//    }
//
//
//
//}
//
//int main(){
//    cin>>N>>M>>K>>Ds;
//    fill(G[0],G[0]+maxn*maxn,inf);
//    for(int i = 0;i<K;i++){
//        cin>>p1>>p2>>Dist;
//        int i1 = change(p1);
//        int i2 = change(p2);
//        G[i1][i2] = Dist;
//        G[i2][i1] = Dist;
//    }
//
//    //下面又是快乐模拟的时间,输出距离所有居民区平均值最小
//    for(auto item:Gug){
//        Dj(item);
//
//
//        int tmpMin = inf;
//        double tmpAvg = 0.0;
//
//        for(int i = 1;i<ind;i++){
//            if(isGug[i]) continue;
//            if(d[i] > Ds){
//                tmpMin  = -2;
//                break;
//            };
//            if(d[i] < tmpMin) tmpMin = d[i];
//            tmpAvg += d[i]*1.0;
//        }
//
//        if(tmpMin > minDis){
//            minDis = tmpMin;
//            avgDis = tmpAvg*1.0/N;
//            resIndex = item;
//        }else if(tmpMin == minDis){
//            if(tmpAvg < avgDis){
//                avgDis = tmpAvg;
//                resIndex = item;
//            };
//        }
//    }
//
//    if(minDis == -1){
//        printf("No Solution");
//    }else{
//        printf("%s\n",IdToName[resIndex].c_str());
//        printf("%.1f %.1f",minDis,avgDis);
//    }
//    return 0;
//}
//
