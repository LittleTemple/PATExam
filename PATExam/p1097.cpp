////开始时间10:45
//#include<iostream>
//#include<algorithm>
//#include <map>
//using namespace std;
//const int maxn = 100100;
//struct node{
//    int addr,data,next,times = maxn,order = 2*maxn;//times为出现过的顺序,order为原来的顺序,这里需要初始化
//}nodes[maxn];
//bool arr[maxn] = {false};
//bool cmp1(node a,node b){
//        return a.order < b.order;
//}
//bool cmp2(node a,node b){
//    if(a.times == b.times) return a.order < b.order;
//    else return a.times < b.times;
//}
//
//int main(){
//    int s,n,key,data,next,total = 0;
//    cin>>s>>n;
//    for(int i = 0;i<n;i++){
//        cin>>key>>data>>next;
//        nodes[key] = {key,data,next,maxn,maxn};
//    }
//
//    //开始遍历
//    for(int i = s;i !=-1;i = nodes[i].next){
//        nodes[i].order = total;
//        nodes[i].times = arr[abs(nodes[i].data)];//这里可能存在负值
//        arr[abs(nodes[i].data)]++;
//        total++;
//    }
//
//    sort(nodes,nodes+maxn,cmp2);
//    int end = total;
//    for(int i = 0;i<total;i++){
//        if(nodes[i].times > 1){
//            end = i;
//            break;
//        }
//    }
////    printf("%d",nodes[end].data);
//    for(int i = 0;i<end;i++){
//        if(i == end-1) printf("%05d %d %d\n",nodes[i].addr,nodes[i].data,-1);
//        else printf("%05d %d %05d\n",nodes[i].addr,nodes[i].data,nodes[i+1].addr);
//    }
//
//    sort(nodes+end,nodes+maxn,cmp1);
//    for(int i = end;i<total;i++){
//        if(i == total-1) printf("%05d %d %d\n",nodes[i].addr,nodes[i].data,-1);
//        else printf("%05d %d %05d\n",nodes[i].addr,nodes[i].data,nodes[i+1].addr);
//    }
//
//    return 0;
//}