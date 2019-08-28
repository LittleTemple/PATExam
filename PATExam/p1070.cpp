////开始时间16:18
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct cake{
//    double w,p;
//};
//int n;
//double dmax,ans = 0.0;
//vector<cake> list;
//bool cmp(cake a,cake b){
//    return a.p > b.p;
//}
//int main(){
//    cin>>n>>dmax;
//    list.resize(n);
//    for(int i = 0;i<n;i++){
//        cin>>list[i].w;
//    }
//    for(int i = 0;i<n;i++){
//        cin>>list[i].p;
//    }
//    sort(list.begin(),list.end(),cmp);
//    for(auto item:list){
//        if(dmax - item.w < 0){
//            ans += dmax*item.p;
//            break;
//        }
//        ans += item.w*item.p;
//        dmax -= item.w;
//    }
//    printf("%.2f\n",ans);
//    return 0;
//
//
//}