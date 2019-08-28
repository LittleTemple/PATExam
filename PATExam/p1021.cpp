//#include<cstdio>
//#include<cmath>
//#include<map>
//#include <vector>
//using namespace std;
////如果是连通图，求最大长度。如果是非连通图，求连通数量
//const int maxn = 10010;
//vector<int> adj[maxn],tmp;
//bool vis[maxn] = {false};
//int cnt = 0,N,maxHeight = 0;
//map<int,int> m;
//
//
//void dfs(int root,int height){
//    if(height > maxHeight){
//        tmp.clear();
//        tmp.push_back(root);
//        maxHeight = height;
//    }else if(height == maxHeight){
//        tmp.push_back(root);
//    }
//
//    vis[root] = true;
//    for(auto item:adj[root]){
//        if(!vis[item]) dfs(item,height+1);
//    }
//}
//
//
//int main(){
//    int p,c,second;
//    scanf("%d",&N);
//    for(int i = 1;i<=N-1;i++){
//        scanf("%d%d",&p,&c);
//        adj[p].push_back(c);
//        adj[c].push_back(p);
//    }
//
//    for(int i = 1;i<=N;i++){
//        if(!vis[i]){
//            cnt++;
//            dfs(i,1);
//        }
//    }
//
//    for(auto item:tmp) m[item]++;
//
//    if(cnt > 1){
//        printf("Error: %d components",cnt);
//    }else{
//        fill(vis,vis +maxn,false);
//        int s1 = tmp[0];
//        tmp.clear();
//        maxHeight = 0;
//
//        dfs(s1,1);//为啥这里可以这样用啊?
//        for(auto item:tmp) m[item]++;
//        for(auto item:m){
//            printf("%d\n",item.first);
//        }
//    }
//
//
//
//}