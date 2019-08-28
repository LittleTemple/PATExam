//#include<cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int maxn = 10010;
//struct family{
//    int root;
//    int num;
//    double avgM;//平均资产数
//    double avgA;//平均占地面积
//};
//
//int N,ID,F,M,K,MES,A;//F是father,M是mother,K是孩子数量,M是总资产,A是总占地面积
//int father[maxn];
//int Mes[maxn] = {0};//每个人的资产数目
//int Area[maxn] = {0};
//bool exist[maxn] = {false};//查看当前Id在数组中是否存在
//bool isRoot[maxn] = {false};
//vector<family> res;
//vector<family> tmp;
//
//int findFather(int a){
//    int x = a;//记录下当前的a
//    while(a != father[a])
//        a = father[a];
//    while(x != father[x]){
//        int z = x;//记录下每次遍历时的x
//        x = father[x];//进行下一次循环
//        father[z] = a;
//    }
//    return a;
//}
//
//void Uion(int a,int b){
//    int faA = findFather(a);
//    int faB = findFather(b);
//    if(faA > faB) father[faA] = faB;
//    else if(faA < faB) father[faB] = faA;
//
//}
//
//bool cmp(family a,family b){
//    if(a.avgA == b.avgA){
//        return a.root < b.root;
//    }else{
//        return a.avgA > b.avgA;
//    }
//}
//
//int main(){
//
//    scanf("%d",&N);
//    res.resize(maxn);
//    for(int i = 0;i<maxn;i++){
//        father[i] = i;
//    }
//
//    for(int i = 0;i<N;i++){
//        scanf("%d %d %d %d",&ID,&F,&M,&K);
//        exist[ID] = true;
//
//        if(M!=-1) {
//            exist[M] = true;
//            Uion(ID,M);
//        }
//        if(F!=-1){
//            exist[F] = true;
//            Uion(ID,F);
//        }
//
//        for(int j = 0;j<K;j++){
//            int child;
//            scanf("%d",&child);
//            if(child != -1){
//                Uion(child,ID);
//                exist[child] = true;
//            }
//        }
//
//        scanf("%d %d",&MES,&A);
//        Mes[ID] = MES;
//        Area[ID] = A;
//    }
//
//    //找到所有的父节点
//    for(int i = 0;i<maxn;i++){
//        if(exist[i]){
//            int fa = findFather(i);
//            isRoot[fa] = true;
//            res[fa].root = fa;
//            res[fa].num++;
//            res[fa].avgA += Area[i];
//            res[fa].avgM += Mes[i];
//        }
//    }
//    //找到所有的根节点
//    int ans = 0;
//    for(int i = 0;i<maxn;i++){
//        if(isRoot[i]){
//            ans++;
//            res[i].avgA /= res[i].num;
//            res[i].avgM /= res[i].num;
//            tmp.push_back(res[i]);
//        }
//    }
//
//    sort(tmp.begin(),tmp.end(),cmp);
//    printf("%d\n",ans);
//    for(auto item:tmp){
//        printf("%04d %d %.3f %.3f\n",item.root,item.num,item.avgM,item.avgA);
//    }
//    return 0;
//
//}