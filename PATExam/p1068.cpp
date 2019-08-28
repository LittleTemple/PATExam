////这题简单，其实就是一个双指针的问题
////目标：找到一个序列中任意子序列之和是给定值的
////怎么做呢？
////使用回溯法尝试一下
////还是得使用dp来做，而且是数组类型的dp，否则就会超时
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n = 0,m = 0;
//int upLimit = 0;
//vector<int> coins,ans,tmp;
//
//void rback(int index,int sum){
//    if(sum == m){
//        for(int i = 0;i<ans.size();i++){
//            if(tmp[i]>ans[i]){
//                return;
//            }
//        }
//        ans = tmp;
//        return;
//    }else if(sum > m||index>upLimit){
//        return;
//    }else if(coins[index]+sum>m){
//        return;
//    }
//
//
//
//    tmp.push_back(coins[index]);
//    rback(index+1,sum+coins[index]);
//    tmp.pop_back();
//
//    rback(index+1,sum);
//
//}
//int main(){
//    scanf("%d%d",&n,&m);
//    for(int i = 0;i<n;i++){
//        int coin = 0;
//        scanf("%d",&coin);
//        coins.push_back(coin);
//    }
//
//    sort(coins.begin(),coins.end());
//
//    upLimit = lower_bound(coins.begin(),coins.end(),m-coins[0])-coins.begin();
//    rback(0,0);
//    if(ans.empty()){
//        printf("%s","No Solution");
//        return 0;
//    }
//
//    for(int i = 0;i<ans.size();i++){
//        if(i == ans.size()-1){
//            printf("%d",ans[i]);
//        }else{
//            printf("%d ",ans[i]);
//        }
//    }
//    printf("\n");
//    return 0;
//
//
//
//
//}