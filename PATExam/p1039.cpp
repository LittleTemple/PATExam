////开始时间14:24
//
//#include<iostream>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n,k,ind,num;//ind为当前课程的下标，num为当前课程的人数
//string name;
//map<string,vector<int>> list;
//int main(){
//    cin>>n>>k;
//    for(int i = 0;i<k;i++){
//        cin>>ind>>num;
//        for(int j = 0;j<num;j++){
//            cin>>name;
//            list[name].push_back(ind);
//        }
//    }
//
//    for(int i = 0;i<n;i++){
//        cin>>name;
//        vector<int> cls = list[name];
//        sort(cls.begin(),cls.end());
//        cout<<name<<" "<<cls.size();
//        for(auto item:cls) cout<<" "<<item<<endl;
//    }
//    return 0;
//}