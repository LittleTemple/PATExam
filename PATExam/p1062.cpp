////开始时间14:30
////每个人都是双标狗系列
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct man{
//    int id;
//    int vgrade;//道德
//    int tgrade;//才华
//    int total;
//};
//vector<man> list[4];//0表示sage,1表示noble,2表示fool,3表示rest
//int N,L,H;
//bool cmp(man a,man b){
//    if(a.total == b.total){
//        if(a.vgrade == b.vgrade) return a.id < b.id;
//        else return a.vgrade > b.vgrade;
//    }else{
//        return a.total > b.total;
//    }
//}
//
//int main(){
//    int id,tgrade,vgrade,sum = 0;
//    cin>>N>>L>>H;
//    for(int i = 0;i<N;i++){
//        cin>>id>>vgrade>>tgrade;
//        if(vgrade<L||tgrade<L) continue;
//        sum++;
//        man m{id,vgrade,tgrade,vgrade+tgrade};
//        if(vgrade >= H&&tgrade >= H) list[0].push_back(m);
//        else if(vgrade >= H&&tgrade < H) list[1].push_back(m);
//        else if(vgrade < H&&tgrade< H&&vgrade >= tgrade) list[2].push_back(m);
//        else list[3].push_back(m);
//    }
//
//
//    for(int i = 0;i<4;i++){
//
//        sort(list[i].begin(),list[i].end(),cmp);
//    }
//
//    cout<<sum<<endl;
//    for(int i = 0;i<4;i++){
//        for(auto item:list[i]) cout<<item.id<<" "<<item.vgrade<<" "<<item.tgrade<<endl;
//    }
//
//    return 0;
//}