//#include<cstdio>
//using namespace std;
////典型的并查集问题
////创立一个int数组pic。其中pic[t],表示图片上有t形状的鸟对应的图片编号.这样我就可以使用findfather,找出这个下标对应的根节点
////之后设定查询函数，就是查询父节点想不想同。需要进行优化
//const int maxn = 10010;
//int father[maxn];
//int pic[maxn] = {0};
//bool isRoot[maxn] = {false};
//bool isBird[maxn] = {false};
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
//    if(faA!=faB){
//        father[faA] = faB;
//    }
//}
//
//bool isCom(int a,int b){
//    return findFather(a)== findFather(b);
//}
//
//int main(){
//    int N,K,t;
//    scanf("%d",&N);
//
//    for(int i = 0;i<maxn;i++){
//        father[i] = i;
//        isRoot[i] = false;
//        pic[i] = 0;
//    }
//
//
//    for(int i = 1;i<=N;i++){
//        scanf("%d",&K);
//        for(int j = 0;j<K;j++){
//            scanf("%d",&t);
//            if(pic[t] == 0) pic[t] = i;
//            else{
//                Uion(i,findFather(pic[t]));//当前图片含有t,找到含有t的所有图片的根节点。认祖归宗
//            }
//            isBird[t] = true;
//        }
//    }
//
//
//
//    for(int i = 1;i<=N;i++){
//        isRoot[findFather(i)] = true;
//    }
//
//    //最后统计数目
//    int tree = 0;
//    int birds = 0;
//    for(int i = 1;i<=N;i++){
//        tree += isRoot[i];
//    }
//    for(int i = 1;i<maxn;i++){
//        birds += isBird[i];
//    }
//
//    printf("%d %d\n",tree,birds);
//    scanf("%d",&K);
//    for(int i = 0;i<K;i++){
//        int b1,b2;
//        scanf("%d%d",&b1,&b2);
//        if(isCom(b1,b2)) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//
//
//}