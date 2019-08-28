//#include<cstdio>
//#include <map>
//#include <vector>
//using namespace std;
//int const maxn = 15;
//int n,m = 0;
//int startX,startY;
//int endX,endY;
//bool path[maxn][maxn],pass[maxn][maxn];
//vector<pair<int,int>> road;
//int X[] = {0,-1,0,1};
//int Y[] = {-1,0,1,0};
////path存储的是当前位置是否可行，pass存放的是当前位置是否已经路过
////其中用true为1，false为0
////总共存在的返回条件：
////1.遇到障碍不走
////2.遇到边界不走
////3.遇到已经走过的不走
//
////1.最终的问题居然是下标不对应.
////2.一般来说还是使用一个数组来存放下最后的结果。方便输出
//void show(){
//    for(int i=0,S = road.size();i<S;++i){
//        printf("(%d,%d)" ,road[i].first,road[i].second);
//        if(i!=S-1)
//            printf("->");
//    }
//    printf("\n");
//    return;
//}
//
////这儿需要使用judge函数,不能直接使用
//bool judge(int nowX,int nowY){
//    if(nowX>n||nowX<0||nowY>m||nowY<0) return false;
//    else if(path[nowX][nowY] == 0||pass[nowX][nowY]) return false;
//    return true;
//}
//void dfs(int nowX,int nowY){
//    road.push_back(make_pair(nowX,nowY));
//    if((nowX == endX&&nowY == endY)){
//        //输出路径
//        show();
//        return;
//    }
//
//
//    //判断
//    for(int i = 0;i<4;i++){
//        int newX = nowX+X[i];
//        int newY = nowY+Y[i];
//        if(judge(newX,newY)){//这个地方还是犹豫，不知道要不要加
//            pass[newX][newY] = true;
//            dfs(newX,newY);
//            road.pop_back();
//            pass[newX][newY] = false;
//        }
//    }
//
//
//
//
//
//
//
//}
//
//int main(){
//    scanf("%d%d",&n,&m);
//    for(int i = 1;i<=n;i++){
//        for(int j = 1;j<=m;j++){
//            scanf("%d",&path[i][j]);
//            pass[i][j] = false;
//        }
//    }
//    scanf("%d%d%d%d",&startX,&startY,&endX,&endY);
//
//    dfs(startX,startY);
//
//}