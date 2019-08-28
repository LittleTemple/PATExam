///*
// * 题目简介：
// * 给出n个数，从中选择k个数，使得这k个数之和正好是等于x,如有多种可能，求出平方和最大的
// * */
//#include <stdio.h>
//#include <vector>
//using namespace std;
///*
// * 这里需要的参数：
// * 1。判定每一个是否选中，所以要有index
// * 2。记录平方和与当前和
// * 3。记录当前选择的个数
// *
// *
// * 终止条件：
// * 1。选择完k个数了，并且这k个数之和正好是x
// * 2。遍历完所有了,index == n
// *
//
// * */
//const  int maxn = 100;
//vector<int> ans,temp;
//int nums[maxn];
//int n,k,x;
//int maxSumQ = 0;
//void dfs(int index,int choosed,int sum,int sumQ){
//    if(choosed == k && sum == x){
//        if(sumQ>maxSumQ){
//            maxSumQ = sumQ;
//            ans  = temp;
//        }
//        return;
//    }
//
//    if(index == n||choosed>k||sum>x){
//        return;
//    }
//    //选中
//    temp.push_back(nums[index]);
//    dfs(index+1,choosed+1,sum+nums[index],sumQ+nums[index]*nums[index]);
//
//    //这里之所以要进行删除，是因为temp是用来存储路线的，如果多次添加会导致路线混乱。所以用完就要删除。
//    //如果不采取这种方式可以使用在参数中传递数组的方式来记录路线，不过也需要删除，比这个麻烦一点。
//    temp.pop_back();
//    //未选中
//    dfs(index+1,choosed+1,sum,sumQ);
//}
//int main(){
//
//
//
//
//
//}
