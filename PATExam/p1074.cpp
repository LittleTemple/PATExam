////开始时间17:00
////思路上不对
//#include<iostream>
//using namespace std;
//const int maxn = 100010;
//struct node{
//    int addr,data,next,order = maxn;
//}nodes[maxn],list[maxn];//list队列用于输出
//
//bool cmp(node a,node b){
//    return a.order < b.order;
//}
//
//int main(){
//    int s,n,k,a,b,c,total = 0;
//    scanf("%d%d%d",&s,&n,&k);
//    for(int i = 0;i<n;i++){
//        scanf("%d%d%d",&a,&b,&c);
//        nodes[a] = {a,b,c,maxn};
//    }
//
//    //遍历链表，同时统计数目
//    for(int i = s;i!=-1;i = nodes[i].next){
//        nodes[i].order = total;
//        total++;
//    }
//
//    //排序，让所有的无效节点都到后面去
//    sort(nodes,nodes+maxn,cmp);
//    for(int i = 0;i<total;i+=k){
//        if(total - i < k) break;//total-1是下标,total-1-i+1是剩余的个数
//        reverse(nodes+i,nodes+i+k);
//    }
//    int i;
//    for(i= 0;i<total-1;i++){
//        printf("%05d %d %05d\n",nodes[i].addr,nodes[i].data,nodes[i+1].addr);
//    }
//    printf("%05d %d %d",nodes[i].addr,nodes[i].data,-1);
//    return 0;
//}