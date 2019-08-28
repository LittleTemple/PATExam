////也算是模拟题了吧
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct stu{
//    int id;
//    int Gi;
//    int Ge;
//    int sum;
//    int rank;
//    vector<int> perfer;
//};
//struct school{
//    int quota;
//    int lowRank = -1;
//    vector<stu> student;
//};
//
//int N,M,K;
//vector<school> s;//学校列表
//vector<stu> list;//学生列表
//
//bool cmp(stu a,stu b){
//    if(a.sum == b.sum) return a.Ge > b.Ge;
//    else return a.sum > b.sum;
//}
//
//bool cmp2(stu a,stu b){
//    return a.id < b.id;
//}
//
//
//
//int main(){
//    cin>>N>>M>>K;
//    list.resize(N);
//    s.resize(M);
//    for(int i = 0;i<M;i++){
//        cin>>s[i].quota;
//    }
//
//    for(int i = 0;i<N;i++){
//        cin>>list[i].Ge>>list[i].Gi;
//        list[i].sum = (list[i].Ge+list[i].Gi);
//        list[i].perfer.resize(K);
//        list[i].id = i;
//        for(int j = 0;j<K;j++){
//            cin>>list[i].perfer[j];
//        }
//    }
//
//    sort(list.begin(),list.end(),cmp);
//
//    //设定排行
//    list[0].rank = 1;
//    for(int i = 1;i<N;i++){
//        list[i].rank = i+1;
//        if(list[i].sum == list[i-1].sum && list[i].Ge == list[i-1].Ge)
//            list[i].rank = list[i-1].rank;
//    }
//
//
//
//
////    遍历所有考生
//    for(int i = 0;i<N;i++){
//        //遍历所有的喜好学校
//        for(int j = 0;j<list[i].perfer.size();j++){
//            int p = list[i].perfer[j];//当前喜好
//            int len = s[p].student.size();//当前学校招生人数
//            if(len < s[p].quota||list[i].rank <= s[p].lowRank){
//                s[p].student.push_back(list[i]);
//                s[p].lowRank = list[i].rank;
//                break;
//            }else if(s[p].quota == 0) continue;
//        }
//    }
//
//
//    //输出
//    for(int i = 0;i<M;i++){
//        sort(s[i].student.begin(),s[i].student.end(),cmp2);
//        for(int j = 0;j<s[i].student.size();j++){
//            cout<<s[i].student[j].id;
//            if(j!=s[i].student.size()-1) cout<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//
//}