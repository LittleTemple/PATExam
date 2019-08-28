//#include<iostream>
//#include<vector>
//using namespace std;
//const int maxn = 510;
//const double inf = 1e9;
//struct node{
//    double price,dis = 30010;
//}nodes[maxn];
//int cmax,dis,davg,n,nowdis = 0,maxdis,leftdis;
//double ans = 0,nowprice;
//vector<int> path;
//bool cmp(node a,node b){
//    return a.dis < b.dis;
//}
//int main(){
//    cin>>cmax>>dis>>davg>>n;
//    for(int i = 0;i<n;i++){
//        cin>>nodes[i].price>>nodes[i].dis;
//    }
//    sort(nodes,nodes+maxn,cmp);
//    if(nodes[0].dis != 0){
//        printf("The maximum travel distance = 0.00");
//        return 0;
//    }else if(nodes[n-1].dis < dis){
//        printf("The maximum travel distance = %.2f",nodes[n-1].dis);
//        return 0;
//    }
//    nowprice = nodes[0].price;
//    while(nowdis < dis){
//        maxdis = nowdis+cmax*davg;
//        double minpos = 0,minprice = inf;
//        int flag = 0;
//        for(int i = 0;i<n&&nodes[i].dis <= maxdis;i++){
//            if(nodes[i].dis <= nowdis) continue;
//            if(nodes[i].price < nowprice){
//                ans += (nodes[i].dis - nowdis - leftdis)*nowprice/davg;
//                leftdis = 0;
//                nowprice = nodes[i].price;
//                nowdis = nodes[i].dis;
//                flag == 1;//用于区分是找到最小值过去的，还是其他方式过去的
//                break;
//            }
//            if(nodes[i].price < minprice){
//                minprice = nodes[i].price;
//                minpos = nodes[i].dis;
//            }
//        }
//        if(flag == 0){
//            ans += (nowprice*(cmax-leftdis/davg));
//            leftdis = cmax*davg-(minpos-nowdis);
//            nowprice = minprice;
//            nowdis = minpos;
//        }
//
//
//    }
//
//
//}