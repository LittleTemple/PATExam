//#include<iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int maxn = 110;
//
//vector<int> tmp;
//vector<vector<int>> path;
//struct treeNode{
//    vector<int> child;
//    int weight;
//}nodes[maxn];
//
//int N,M;
//long long S;
//
//
//bool cmp(vector<int> a,vector<int> b){
//    int i = 0;
//    while(i<a.size()&&i<b.size()){
//        if(a[i] == b[i]){
//            i++;
//            continue;
//        }
//        return a[i]>b[i];
//    }
//   return false;
//
//}
//int format(string str){
//    return (str[0]-'0')*10+str[1]-'0';
//}
//
////读题不仔细啊，必须得是叶子节点
//void dfs(int root,int sum){
//    if(sum > S) return;
//
//    tmp.push_back(nodes[root].weight);
//    sum += nodes[root].weight;
//
//    if(sum == S){
//        if(nodes[root].child.size() != 0){
//            tmp.pop_back();
//            return;
//        }
//        path.push_back(tmp);
//        tmp.pop_back();
//        return;
//    }
//    vector<int> clist = nodes[root].child;
//
//    for(int i = 0;i<clist.size();i++){
//        if(sum + nodes[clist[i]].weight > S) continue;
//        dfs(clist[i],sum);
//    }
//    tmp.pop_back();
//}
//
//int main(){
//    cin>>N>>M>>S;
//    string pId,cId;
//    int childNum;
//    for(int i = 0;i<N;i++){
//        cin>>nodes[i].weight;
//    }
//    for(int i = 0;i<M;i++){
//        cin>>pId>>childNum;
//        for(int j = 0;j<childNum;j++){
//            cin>>cId;
//            nodes[format(pId)].child.push_back(format(cId));
//        }
//
//    }
//    dfs(0,0);
//    sort(path.begin(),path.end(),cmp);
//    for(int i = 0;i<path.size();i++){
//        for(int j = 0;j<path[i].size();j++){
//            cout<<path[i][j];
//            if(j != path[i].size()-1){
//                cout<<" ";
//            }
//        }
//        if(i != path.size()-1) cout<<endl;
//
//    }
//
//
//}