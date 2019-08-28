////结束时间18:00
////将所有的换算成分钟
//#include<iostream>
//#include<map>
//#include<vector>
//#include <string>
//#include<algorithm>
//using namespace std;
//const int maxn = 1010;
//struct calls{
//    int day,hour,minute,time,type;
//};
//struct man{
//    string name;
//    vector<calls> clist;
//};
//vector<man> list;
//map<string,int> nameToId;
//
//int n,rate[24] = {0},month,day,hour,minute,ind = 0;
//string name,t,type;
//int change(string str){
//    if(nameToId.find(str)!=nameToId.end()) return nameToId[str];
//    else{
//        nameToId[str] = ind;
//        ind++;
//        return nameToId[str];
//    }
//}
//double getOneDay(){
//    double sum = 0;
//    for(int i = 0;i<24;i++){
//        sum += rate[i]*60;
//    }
//    return sum;
//}
//bool cmp(man a,man b){
//    return a.name < b.name;
//}
//bool cmp2(calls a,calls b){
//    return a.time<b.time;
//}
//
//int main(){
//    int tmp,id;
//    for(int i = 0;i<24;i++){
//        cin>>rate[i];
//    }
//    cin>>n;
//    list.resize(n);
//    for(int i = 0;i<n;i++){
//        cin>>name>>t>>type;
//        id = change(name);
//        month = stoi(t.substr(0,2));
//        day = stoi(t.substr(3,2));
//        hour = stoi(t.substr(6,2));
//        minute = stoi(t.substr(9,2));
//        tmp = (type[1] =='n'?0:1);
//        calls c = {day,hour,minute,day*24*60+hour*60+minute,tmp};
//        list[id].clist.push_back(c);
//        list[id].name = name;
//    }
//    list.resize(ind);
//    sort(list.begin(),list.end(),cmp);
//
//    for(auto item:list){//如果没有有效的通话,需要注意
//        printf("%s %02d\n",item.name.c_str(),month);
//
//        int last = -1,flag = -1;
//        vector<calls> c = item.clist;
//        sort(c.begin(),c.end(),cmp2);
//        double total = 0;
//
//        for(int i = 0;i<c.size();i++){
//            double  totalTmp = 0;
//            int totalTime = 0;
//           if(c[i].type == 0) last = i;
//           else if(c[i].type == 1&&last !=-1){
//               totalTime += c[i].time - c[last].time;
//               totalTmp += (60-c[last].minute)*rate[c[last].hour];
//               totalTmp += c[i].minute*rate[c[i].hour];
//               for(int j = c[last].hour+1;j<c[i].hour;j++){
//                   totalTmp += 60*rate[j];
//               }
//               totalTmp += (c[i].day-c[last].day)*getOneDay();
//               printf("%02d:%02d:%02d ",c[last].day,c[last].hour,c[last].minute);
//               printf("%02d:%02d:%02d ",c[i].day,c[i].hour,c[i].minute);
//               printf("%d $%.2f\n",totalTime,totalTmp/100);
//               total += totalTmp;
//
//               //清除
//               last = -1;
//           }
//        }
//
//        printf("Total amount: $%.2f\n",total/100);
//    }
//    return 0;
//
//}