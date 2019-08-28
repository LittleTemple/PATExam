////开始时间15:08.
//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//using namespace std;
////按照最终排行升序,同一分数同一排行。排行相同按照注册号码升序
//struct stu{
//    int id;
//    string name;
//    int loc;//考场
//    int grade;//成绩
//    int finalRank;//最终排名
//    int locRank;//场地排名
//};
//int N,ind = 0,K,id;
//string name;
//vector<stu> list;
//vector<stu> testee;//每个场地的考生
//
//map<string,int> nameToId;
//map<int,string> idToName;
//int change(string str){
//    if(nameToId.find(str)!=nameToId.end()){
//        return nameToId[str];
//    }else{
//        nameToId[str] = ind;
//        idToName[ind] = str;
//        ind++;
//        return nameToId[str];
//    }
//
//}
//bool cmp1(stu a,stu b){
//
//    if(a.grade == b.grade){
//        return a.name < b.name;
//    }else{
//        return a.grade > b.grade;
//    }
//}
//
//int main(){
//    cin>>N;
//    list.resize(300000);
//    testee.resize(N);
//    for(int i = 0;i<N;i++){
//        cin>>K;
//        getchar();
//        for(int j = 0;j<K;j++){
//            cin>>name;
//            id = change(name);
//            cin>>list[id].grade;
//            getchar();
//            list[id].name = name;
//            list[id].loc = i+1;
//            list[id].id = id;
//        }
//    }
//    list.resize(ind);
//
//    sort(list.begin(),list.end(),cmp1);
////    for(auto item:list){
////        int id =item.id;
////        cout<<idToName[id]<<" "<<item.name<<" "<<item.loc<<" "<<item.grade<<" "<<item.finalRank<<endl;
////    }
//
//
//    //对全部进行处理
//    list[0].finalRank = 1;
//    for(int i = 1;i<ind;i++){
//        list[i].finalRank = i+1;
//        if(list[i].grade == list[i-1].grade)
//            list[i].finalRank = list[i-1].finalRank;
//    }
//
////    for(auto item:list){
////        int id =item.id;
////        cout<<idToName[id]<<" "<<item.finalRank<<" "<<item.loc<<" "<<item.locRank<<endl;
////    }
//
//    //遍历所有的场地
//    for(int i = 1;i<=N;i++){
//        int lastPos = -1;//记录上一次该场地人员出现的位置
//        int rank = 0;//用来记录没有并列情况下的排行
//        for(int j = 0;j<ind;j++){
//           if(list[j].loc != i) continue;
//           rank++;
//           list[j].locRank = rank;
//           if(lastPos!=-1&&(list[j].grade == list[lastPos].grade)){
//               list[j].locRank = list[lastPos].locRank;
//           }
//           lastPos = j;
//        }
//
//    }
//
//    //输出所有结果
//    cout<<ind<<endl;
//    for(auto item:list){
//        int id =item.id;
//        cout<<idToName[id]<<" "<<item.finalRank<<" "<<item.loc<<" "<<item.locRank<<endl;
//    }
//    return 0;
//}