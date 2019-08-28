//#include<iostream>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 10000000;
//struct stu{
//    int id;//这里需要记录一下id,因为需要排序，会导致顺序错乱.
//    int grade[4];//0代表平均,1:c语言，2:数学，3:代表英语
//    int rank[4];//代表各个科目的排名
//};
//int N,M,ind = 0,now = -1;
//char arr[4] = {'A','C','M','E'};
//vector<stu> list;
//map<string,int> nameToId;
//map<int,string> idToName;
//
//int change(string str,int flag){//0表示插入,1表示查询
//    if(nameToId.find(str)!=nameToId.end()){
//        return nameToId[str];
//    }else{
//        if(flag == 1) return -1;
//        else{
//            nameToId[str] = ind;
//            idToName[ind] = str;
//            ind++;
//            return nameToId[str];
//        }
//    }
//
//}
//
//bool cmp(stu a,stu b){ //按照平均成绩排序
//    return a.grade[now] > b.grade[now];//这里使用now来记录需要进行排序的科目
//
//}
//
//
//int main(){
//    int c,m,e,avg;
//    string name,query;
//    cin>>N;
//    cin>>M;
//    list.resize(N);
//    getchar();
//
//    for(int i = 0;i<N;i++){
//        cin>>name;
//        int id = change(name,0);
//        int sum = 0;
//        for(int j = 1;j<4;j++) {
//            cin>>list[i].grade[j];
//            getchar();
//            sum += list[i].grade[j];
//        }
//        list[i].grade[0] = sum;
//        list[i].id = id;
//    }
//
//    //开始统计各个学生的每门课的成绩
//    //这里应该是ind,也就是对所有的id进行操作。但是考虑到i的增加和ind是同步的。所以也就是无所谓了
//    //对每个课程都要遍历一次数组
//    for(now = 0;now<4;now++) {
//        sort(list.begin(), list.end(), cmp);
//        //将首位排行设为1
//        list[0].rank[now] = 1;
//        for(int i = 1;i<N;i++){
//            list[i].rank[now] = i+1;
//            if(list[i].grade[now] == list[i-1].grade[now]){
//                list[i].rank[now] = list[i-1].rank[now];
//            }
//        }
//    }
//
//
//
//    for(int i = 0;i<M;i++){
//        cin>>query;
//        int qid = change(query,1);
//        if(qid == -1){
//            cout<<"N/A"<<endl;
//            continue;
//        }
//        int j;
//        for(j = 0;j<ind;j++){
//            if(list[j].id == qid) break;
//        }
//        int root = j;
//        //找到最小值
//        int minRank = N+1;
//        int minSub = 5;
//        for(int k = 3;k>=0;k--){
//            if(list[root].rank[k] <= minRank){
//                minRank = list[root].rank[k];
//                minSub = k;
//            }
//        }
//        cout<<minRank<<" "<<arr[minSub]<<endl;
//
//
//    }
//    return 0;
//
//}