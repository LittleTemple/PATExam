//#include <cstdio>
//#include <vector>
//
//using namespace std;
//int N,M,friendA,friendB,res = 0;
//vector<int> father;
//int findFather(int x){
//    int a = x;
//    while(x != father[x]){
//        x = father[x];
//    }
//    //现在的x就是根节点
//    int root = x;
//    while(a != father[a]){
//        int z = a;
//        father[z] = root;
//        a = father[a];
//    }
//    return root;
//}
//
//int main(){
//    scanf("%d%d",&N,&M);
//    father.resize(N+1);
//
//    //初始化
//    for(int i = 1;i<=N;i++){
//        father[i] = i;
//    }
//
//    //构建关系
//    for (int i = 1; i <=M; ++i) {
//        scanf("%d%d",&friendA,&friendB);
//        father[friendA] = friendB;
//    }
//
//    for (int i = 1; i <= N ; ++i) {
//        father[i] = findFather(i);
//        if(father[i] == i) res++;
//    }
//    printf("%d",res);
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//}