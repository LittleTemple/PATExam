#include <iostream>
#include <map>
#include <vector>
using namespace std;
//本质上就是构建一个多叉树
//使用dfs进行深度遍历
//下面是我的代码
//bool dfs(map<int,vector<int>> &preList,int index,int tmpIndex){
//    if(index < 0) return true;
//    if(preList[index].empty()) return true;
//    cout<<index<<endl;
//    vector<int> backs = preList[1];//这个地方返回的值究竟是什么?
//    //遍历所有的后继序列map
//    for(int i = 0;i<backs.size();i++){
//        if(backs[i] == index){
//            return false;
//        }else{
//            return dfs(preList,index,backs[i]);
//        }
//    }
//    if(index == 0){
//        return true;
//    }
//    dfs(preList,index-1,preList[index-1][0]);
//}
//
//
//bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
//    //这跟以前的一道题挺像
//    map<int,vector<int>> preList;//自定义一个前驱表，int类型是课程的序号，vector类型是所有的后继序列
//    for(int i = 0;i<prerequisites.size();i++){
//        int back = prerequisites[i].first;
//        int pre =  prerequisites[i].second;
//        if(preList[pre].empty()){
//            vector<int> tmp;
//            tmp.push_back(back);
//            preList[pre] = tmp;
//        }else{
//            preList[pre].push_back(back);
//        }
//    }
//
//    return dfs(preList,numCourses-1,preList[numCourses-1][0]);
//}

void dfs(int index,vector<vector<int>>& courses,vector<bool>& visited,bool &cycle){
    if(visited[index]){
        cycle = true;
        return;
    }
    visited[index] = true;
    for(int i = 0;i<courses[index].size();i++){
        dfs(courses[index][i],courses,visited,cycle);
        if(cycle) return;
    }
    visited[index] = false;

}


//还是不对，照着别人的思路手打一遍
bool canFinish(int numCourses, vector<pair<int, int>>& prer) {
    //首先存储数据
    vector<vector<int>> courses(numCourses);
    vector<bool> visited(numCourses,false);//用来存储是否已经访问过了
    bool cycle = false;//判断是不是形成了环
    for(int i = 0;i<prer.size();i++){
        courses[prer[i].second].push_back(prer[i].first);
    }

    for(int i = 0;i<numCourses;i++){
        if(cycle) return false;
        if(!visited[i]){ //如果该节点没有被访问
            dfs(i,courses,visited,cycle);
        }
    }

    return !cycle;

}