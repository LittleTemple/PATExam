////16:12开始
//#include<cstdio>
//#include <vector>
//using namespace std;
//const int maxn = 2010;
//int father[maxn];
//int course[maxn] = {0};
//vector<int> m;
//vector<int> isRoot;
//int N;
//int findFather(int n){
//    while(father[n]!=n){
//        n = father[n];
//    }
//    return father[n];
//}
//
//void Uion(int a,int b){
//    int faA = findFather(a);
//    int faB = findFather(b);
//    if(faA != faB) father[faA] = faB;
//}
//
//bool cmp(int a,int b){
//    return a > b;
//}
//
//
//int main(){
//    scanf("%d",&N);
//    m.resize(N+1);
//    isRoot.resize(N+1);
//
//    //初始化
//    for(int i = 1;i<=N;i++){
//        father[i] = i;
//        isRoot[i] = 0;//将所有的根数置为0
//    }
//
//    for(int i = 1;i<=N;i++){
//        int m;
//        scanf("%d:",&m);
//        for(int j = 0;j<m;j++){
//            int t;
//            scanf("%d",&t);
//            if(course[t] == 0){ //现在还没人喜欢
//                course[t] = i;//就把当前位置的最佳喜欢权授予i
//            }
//            //如果是有人喜欢，就去找喜欢m[t]的老大，然后加入其中。
//            Uion(i,findFather(course[t]));
//        }
//    }
//
//    int ans = 0;
//    //现在开始查找根节点的数目了
//    for(int i = 1;i<=N;i++){
//        if(isRoot[findFather(i)] == 0) ans++;
//        isRoot[findFather(i)]++;
//    }
//
//    printf("%d\n",ans);
//    int num = 0;
////    之后遍历输出
//    sort(isRoot.begin(),isRoot.end(),cmp);
//    for(int i = 0;i<N;i++){
//        if(isRoot[i] != 0){
//            if(num == 0) printf("%d",isRoot[i]);
//            else printf(" %d",isRoot[i]);
//            num++;
//
//        }
//    }
//
//    return 0;
//
//}