////开始时间14:01
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct rich{
//    string name;
//    int age;
//    long long w;
//};
//int N,K,num,Amin,Amax;
//vector<rich> list;
//bool cmp(rich a,rich b){
//    if(a.w == b.w)
//        if(a.age == b.age) return a.name < b.name;
//        else return a.age < b.age;
//    else return a.w > b.w;
//}
//
//int main(){
//    cin>>N>>K;
//    list.resize(N);
//    for(int i = 0;i<N;i++){
//        cin>>list[i].name>>list[i].age>>list[i].w;
//    }
//    sort(list.begin(),list.end(),cmp);
//    for(int i = 0;i<K;i++){
//        cin>>num>>Amin>>Amax;
//        bool flag = false;//判断当前段位是否有人
//        cout<<"Case #"<<i+1<<":"<<endl;
//        for(int j = 0;j<N;j++){
//            if(num > 0&&list[j].age>=Amin&&list[j].age<=Amax){
//                flag = true;
//                num--;
//                cout<<list[j].name<<" "<<list[j].age<<" "<<list[j].w<<endl;
//            }
//        }
//        if(!flag) cout<<"None"<<endl;
//    }
//    return 0;
//}