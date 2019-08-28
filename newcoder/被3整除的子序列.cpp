#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;

    cin>>str;
    int n = str.size();
    //定义一个二维的dp数组
    //1.找到dp数组所代表的含义
    int dp[60][5] = {0};
    long long mod = 1e9+7;
    //对数组进行初始化,这个地方搞定了
    int cur = str[0]-'0';
    dp[0][cur%3]++;

    for (int i = 1; i < n; ++i) {

        if((str[i]-'0')%3 == 0){
            dp[i][0] = (2*dp[i-1][0]+1)%mod;
            dp[i][1] = (2*dp[i-1][1])%mod;
            dp[i][2] = (2*dp[i-1][2])%mod;
        }else if((str[i]-'0')%3 == 1){
            //以此为例
            //dp[i][0] 存放的就是从0~i中，余数为0的组合的数量
            //dp[i-1][0]是上一项中余数为0的数量
            // 又考虑当前位%3 ==1,所以要找到上一项中余数为2的个数。这样余数为2加上余数为1才是余数为0,也就是dp[i-1][2];
            //所以dp[i][0] = dp[i-1][0]+dp[i-1][2];
            dp[i][0] = (dp[i-1][0]+dp[i-1][2])%mod;
            dp[i][1] = (dp[i-1][1]+dp[i-1][0]+1)%mod;//这里之所以要+1，表示只有最后一位一个数的时候
            dp[i][2] = (dp[i-1][2]+dp[i-1][1])%mod;
        }else{
            dp[i][0] = (dp[i-1][0]+dp[i-1][1])%mod;
            dp[i][1] = (dp[i-1][1]+dp[i-1][2])%mod;
            dp[i][2] = (dp[i-1][2]+dp[i-1][0]+1)%mod;
        }
        for(int j = 0;j<3;j++) dp[i][j] = dp[i][j]% mod;
    }

    //所以这个题其实是把被3整除,被3整除余1,余2都计算出来了。
    cout<<dp[n-1][0];





}