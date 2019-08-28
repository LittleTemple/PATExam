//#include <iostream>
//#include <vector>
//using namespace std;
//const int res = 0;
//int dfs(int index,vector<int> nums,int target){
//    //这里判定终止条件的地方还是不对
//    //这里有两个需要满足的条件啊，index == nums.size()还有target == 最后一位数
//    //这个地方最好还是不要使用&&符号连接，容易因条件比较苛刻导致死循环
//    if(index == nums.size()){
//        if(target == 0) return 1;
//    }
//    if(nums[index] == 0){
//        return 2*dfs(index+1,nums,target);
//    }
//    return dfs(index+1,nums,target-nums[index])+
//           dfs(index+1,nums,target+nums[index]);
//
//}
//int findTargetSumWays(vector<int>& nums, int S) {
//    dfs(0,nums,S);
//    return res;
//}
//
//int main(){
//    //使用递归的方式比较简单
//    //index用来表示当前的下标
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(0);
//    findTargetSumWays(nums,1);
//
//};
//
//
