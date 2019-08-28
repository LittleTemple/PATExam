////开始时间15:24
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//using namespace std;
//
//struct stu{
//    int grade;
//    string name;
//    string id;
//};
//int N,gmin,gmax,num = 0;
//vector<stu> list;
//bool cmp(stu a,stu b){
//    return a.grade > b.grade;
//}
//int main(){
//    cin>>N;
//    list.resize(N);
//    for(int i = 0;i<N;i++){
//        int grade;
//        string name,id;
//        cin>>name>>id>>grade;
//        list[i].name = name;
//        list[i].id = id;
//        list[i].grade = grade;
//    }
//    cin>>gmin>>gmax;
//    sort(list.begin(),list.end(),cmp);
//    for(int i = 0;i<N;i++){
//        if(list[i].grade >= gmin && list[i].grade <= gmax){
//            cout<<list[i].name<<" "<<list[i].id<<" "<<list[i].grade<<endl;
//            num++;
//        }
//    }
//    if(num == 0) cout<<"NONE"<<endl;
//    return 0 ;
//
//}