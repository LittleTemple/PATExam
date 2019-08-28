#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using  namespace std;

//只需要先求出来dp[M]就ok了

int main(){
    int T = 0;
    cin>>T;
    for(int i = 0;i<T;i++){

//        int dp[1000000000];//数组长度过大
        long long  N = 0,M = 0;
        cin>>N>>M;

        //首先对dp[1]~dp[M]进行赋值
        long long  sumM = 0;
        for(long long  j = 1;j<=M;j++){
            sumM += j-1;
        }

        //求出X是M的多少整数倍
        long long  mul = N/M;
        long long  sumXM = 0;
        for(int j = 1;j<=mul;j++){
            sumXM += M*(N-j*M);//这里乘可能会越界
        }

        long long left = N%M;
        long long sumLeft = 0;
        //下面是求剩下的部分
        for(long long  j = 1;j<=left;j++){
            sumLeft += j-1;
        }

        cout<<sumM+sumXM+sumLeft<<endl;

    }
}