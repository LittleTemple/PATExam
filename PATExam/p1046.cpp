////开始时间16:08
//#include<iostream>
//#include<vector>
//using namespace std;
////有点dp的影子
//int n,sum = 0,tmp,m;//sum 记录到原点的距离
//vector<int> list;
//int main(){
//    cin>>n;
//    list.resize(n+1);
//    for(int i = 1;i<=n;i++){
//        cin>>tmp;
//        list[i] = sum;
////        cout<<list[i]<<endl;
//        sum += tmp;
//    }
//
//    cin>>m;
//    for(int i = 0;i<m;i++){
//        int a,b,dis1,dis2;
//        cin>>a>>b;
//        dis1 = abs(list[a]-list[b]);
//        dis2 = sum - dis1;
//        cout<<min(dis1,dis2)<<endl;
//    }
//    return 0;
//
//
//}