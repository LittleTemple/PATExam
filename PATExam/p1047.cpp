////开始时间14:24
//#include<iostream>
//#include<map>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n,k,num,ind;
//string name;
//const int maxn = 2510;
//vector<vector<string>> m;
//bool course[maxn] = {false};
//int main(){
//    cin>>n>>k;
//    m.resize(k+1);
//    for(int i = 0;i<n;i++){
//        cin>>name>>num;
//        for(int j =0;j<num;j++){
//            cin>>ind;
//            m[ind].push_back(name);
//            course[ind] = true;
//        }
//    }
//    for(int i = 1;i<=k;i++){
//        printf("%d %d\n",i,m[i].size());//cout会超时
//        vector<string> stus = m[i];
//        sort(stus.begin(),stus.end());
//        for(auto s:stus) printf("%s\n",s.c_str());
//    }
//
//    return 0;
//}
