//////开始时间15:23
////#include<iostream>
////#include<vector>
////#include<algorithm>
////#include <map>
////using namespace std;
////struct user{
////    int id;
////    string name;
////    int total = 0;
////    int num = 0;//完美解决的个数
////    int rank;
////    bool flag = false;//解决过问题
////    vector<int> p;
////};
////int N,pnum,M,ind = 0;//M提交者,pnum问题的个数
////vector<user> list;
////vector<int> plist;//满分列表
////map<string,int> nameToId;
////map<int,string> idToName;
////
////int change(string str){
////    if(nameToId.find(str)!=nameToId.end()){
////        return nameToId[str];
////    }else{
////        nameToId[str] = ind;
////        idToName[ind] = str;
////        ind++;
////        return nameToId[str];
////    }
////}
////
////bool cmp(user a,user b){
////    if(a.total == b.total){
////        if(a.num == b.num) return a.name < b.name;
////        else return a.num > b.num;
////    }else{
////        return a.total > b.total;
////    }
////}
////
////int main(){
////    cin>>N>>pnum>>M;
////    plist.resize(pnum+1);
////    list.resize(N);
////    for(int i = 1;i<=pnum;i++){
////        cin>>plist[i];
////    }
////    getchar();
////
////
////    //初始化
////    for(int i = 0;i<N;i++){
////        list[i].p.resize(pnum+1);
////        for(int j = 0;j<=pnum;j++){
////            list[i].p[j] = -2;
////        }
////    }
////
////    //输入
////    for(int i = 0;i<M;i++){
////        string str;
////        int id,pid,score;
////        cin>>str>>pid>>score;
////        getchar();
////        id = change(str);
////        list[id].id = id;
////        list[id].name = str;
////        if(score > list[id].p[pid]){//判断当前的成绩是否需要修改
////            list[id].p[pid] = score;
////        }
////        if(score != -1) list[id].flag = true;//设定解决过问题
////        if(score == plist[pid]) list[id].num++;//得到完美答案
////    }
////
////    //先计算总成绩
////    for(int i = 0;i<N;i++){
////        for(int j = 1;j<=pnum;j++){
////            if(list[i].p[j] > 0) list[i].total+=list[i].p[j];
////        }
////    }
////
////    sort(list.begin(),list.end(),cmp);
////    list[0].rank = 1;
////    for(int i = 1;i<N;i++){
////        list[i].rank = i+1;
////        if(list[i].total == list[i-1].total) list[i].rank = list[i-1].rank;
////    }
////
////    //最后的输出
////    for(int i = 0;i<N;i++){
////        if(!list[i].flag) continue;
////
////        printf("%d %s %d",list[i].rank,idToName[list[i].id].c_str(),list[i].total);
////        for(int j = 1;j<=pnum;j++){
////            if(list[i].p[j] == -2) printf(" -");
////            else if(list[i].p[j] == -1) printf(" 0");
////            else printf(" %s",to_string(list[i].p[j]).c_str());
////        }
////        printf("\n");
////    }
////    return 0;
////}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct node {
//    int rank, id, total = 0;
//    vector<int> score;
//    int passnum = 0;
//    bool isshown = false;
//};
//bool cmp1(node a, node b) {
//    if(a.total != b.total)
//        return a.total > b.total;
//    else if(a.passnum != b.passnum)
//        return a.passnum > b.passnum;
//    else
//        return a.id < b.id;
//}
//
//int main() {
//    int n, k, m, id, num, score;
//    scanf("%d %d %d", &n, &k, &m);
//    vector<node> v(n + 1);
//    for(int i = 1; i <= n; i++)
//        v[i].score.resize(k + 1, -1);
//    vector<int> full(k + 1);
//    for(int i = 1; i <= k; i++)
//        scanf("%d", &full[i]);
//    for(int i = 0; i < m; i++) {
//        scanf("%d %d %d", &id, &num, &score);
//        v[id].id = id;
//        v[id].score[num] = max(v[id].score[num], score);
//        if(score != -1)
//            v[id].isshown = true;
//        else if(v[id].score[num] == -1)
//            v[id].score[num] = -2;
//    }
//    for(int i = 1; i <= n; i++) {
//        for(int j = 1; j <= k; j++) {
//            if(v[i].score[j] != -1 && v[i].score[j] != -2)
//                v[i].total += v[i].score[j];
//            if(v[i].score[j] == full[j])
//                v[i].passnum++;
//        }
//    }
//    sort(v.begin() + 1, v.end(), cmp1);
//    for(int i = 1; i <= n; i++) {
//        v[i].rank = i;
//        if(i != 1 && v[i].total == v[i - 1].total)
//            v[i].rank = v[i - 1].rank;
//    }
//    for(int i = 1; i <= n; i++) {
//        if(v[i].isshown == true) {
//            printf("%d %05d %d", v[i].rank, v[i].id, v[i].total);
//            for(int j = 1; j <= k; j++) {
//                if(v[i].score[j] != -1 && v[i].score[j] != -2)
//                    printf(" %d", v[i].score[j]);
//                else if(v[i].score[j] == -1)
//                    printf(" -");
//                else
//                    printf(" 0");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}