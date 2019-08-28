///*
// * 题目简介：
// * 有n个物品，每个重量为w[i],价值为c[i].
// * 现将其放到一个最大承重为V的容器中，求容器中物品的最大价值？
// * */
//#include <stdio.h>
//#include <vector>
//using namespace std;
///*
// * 这里需要的参数：
// * 1。判定每一个是否选中，所以要有index
// * 2。要记录重量和价值，所以需要有sumW,sumC
// * 3。两个数组
// * 4。最大容积V
// *
// *
// * 终止条件：
// * 1。超重，也即是sumW>V
// * 2。遍历完所有的物品了,index == n
// *
// * 两种情况：
// * 1。选中，index++,sumW+w[index],sumC+c[index]
// * 2。不选中，不变即可
// * */
//int maxValue = 0;
//void dfs(int index,int sumW,int sumC,vector<int> w,vector<int> c,int V){
//    if(index==w.size()){
//        return;
//    }
//
//
//
//    //不选中
//
//    dfs(index+1,sumW,sumC,w,c,V);
//
//
//
//
//    if(sumW+w[index]<=V){//这个地方还是要注意，sumC存储的是上一个，所以还要加上这个再进行判断，否则会漏掉一个
//        if(sumC+c[index]>maxValue){
//            maxValue = sumC+c[index];
//        }
//
//        //选中
//        dfs(index+1,sumW+w[index],sumC+c[index],w,c,V);
//    }
//
//
//
//
//}
//int main(){
//    int n,v;
//    vector<int> w,c;
//
//    scanf("%d%d",&n,&v);
//    for(int i = 0;i<n;i++){
//        int tmp = 0;
//        scanf("%d",&tmp);
//        w.push_back(tmp);
//    }
//
//    for(int i = 0;i<n;i++){
//        int tmp = 0;
//        scanf("%d",&tmp);
//        c.push_back(tmp);
//    }
//
//    dfs(0,0,0,w,c,v);
//    printf("%d",maxValue);
//
//
//
//
//
//
//}
