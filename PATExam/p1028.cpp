////开始时间13:45
////这个题目比较简单，考虑好排序的条件就行
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct stu{
//    int id;//6位，用int应该可以
//    string name;
//    int grade;
//};
//int N,flag;
//vector<stu> list;
//bool cmp(stu a,stu b){
//    if(flag == 1){//对id排序
//        return a.id < b.id;
//    }else if(flag == 2){
//        if(a.name == b.name) return a.id<b.id;
//        else return a.name < b.name;
//    }else{//这里需要确保输入的只有1,2,3
//        if(a.grade == b.grade) return a.id < b.id;
//        else return a.grade < b.grade;
//    }
//}
//int main(){
//    cin>>N>>flag;
//    list.resize(N);
//    for(int i = 0;i<N;i++){
//        cin>>list[i].id>>list[i].name>>list[i].grade;
//    }
//
//    sort(list.begin(),list.end(),cmp);
//    for(auto item:list) printf("%06d %s %d\n",item.id,item.name.c_str(),item.grade);
//    return 0;
//
//}