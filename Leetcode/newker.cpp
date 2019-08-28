//#include<cstdio>
//#include <vector>
//#include <iostream>
//using namespace std;
////应该是用dp做
//int Xb = 0,Yb = 0,Xh = 0,Yh = 0;
////判断是否撞到控制点
////不用这个函数来判断了，使用一矩阵来判断
//bool isConflict(int x,int y){
//    int hx[8]={-2,-1,1,2,2,1,-1,-2};
//    int hy[8]={1,2,2,1,-1,-2,-2,-1};
//    bool flag = false;
//    for(int i = 0;i<8;i++){
//        //这里不能直接return
//        if((x == (Xh+hx[i])&& y == (Yh+hy[i]))){
//            flag = true;
//        }else if((x == Xh)&&(y == Yh)){
//            flag = true;
//        }
//    }
//    return flag;
//}
//
//long long dp[1001][1001]={0};
////int hx[] = {-1,-1,1,1,-2,-2,2,2};
////int hy[] = {-2,2,-2,2,-1,1,-1,1};
//int main(){
//    scanf("%d%d%d%d",&Xb,&Yb,&Xh,&Yh);
////    isConflict(0,0);
//
////    vector<vector<long >> dp{0};
////    for(int i = 1;i<=Xb+1;i++){
////        vector<long > tmp;
////        for(int j = 1;j<=Yb+1;j++){
////            tmp.push_back(0);
////
////        }
////        dp.push_back(tmp);
////    }
//
//    //首先判断第一行
//    int flagX = 1;
//    for(int i = 1;i<=Yb;i++){
//        if(isConflict(1,i)){
//            flagX = 0;
//        }
//        dp[1][i] = flagX;
//    }
//
//
//    int flagY = 1;
//    for(int i = 1;i<=Xb;i++){
//        if(isConflict(i,1)){
//            flagY = 0;
//        }
//        dp[i][1] = flagY;
//    }
//
//
//
//    for(int i = 2;i<=Xb;i++){
//        for(int j = 2;j<=Yb;j++){
////            if(isConflict(i,j)){
////                dp[i][j] = 0;
////            }
////            //判断上一项是否满足条件
////            if(isConflict(i-1,j)&&!isConflict(i,j-1)){
////                dp[i][j] = dp[i][j-1]%10000007;
////            }else if(!isConflict(i-1,j)&&isConflict(i,j-1)){
////                dp[i][j] = dp[i-1][j]%10000007;
////            }else if(isConflict(i-1,j)&&isConflict(i,j-1)){
////                dp[i][j] = 0;
////            }else{
////                dp[i][j] = (dp[i][j-1]%10000007+dp[i-1][j]%10000007)%10000007;
////            }
//
//            if(isConflict(i,j)){
//                dp[i][j] = 0;
//            }else{
//                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%10000007;
//            }
//        }
//    }
//    printf("%lld",dp[Xb][Yb]);
//}
//
////#include<iostream>
////using namespace std;
////int main(){
////    int n = 0;
////    cin>>n;
////    for(int i = n+1;i>=2;i--){
////        for(int j = 1;j<=i;j++){
////            cout<<"* ";
////        }
////        cout<<endl;
////    }
////    cout<<"* "<<endl;
////    for(int i = 2;i<=n+1;i++){
////        for(int j = 1;j<=i;j++){
////            cout<<"* ";
////        }
////    }
////
////
////}
//
////
////#include<iostream>
////#include <vector>
////using namespace std;
////int main(){
////    long n = 0;
////    cin>>n;
////    if(n == 1||n == 2||n == 3){
////        cout<<1<<endl;
////        return 0 ;
////    }else if(n == 4){
////        cout<<4<<endl;
////        return 0;
////    }
////
////    long long *dp = new long long[3];
////
////    dp[0] = 1;
////    dp[1] = 1;
////    dp[2] = 1;
////    int i = 0;
////
//////    for(i = 5;i<=n;i++){
//////        long long first = (2*dp[i-1])%1000000;
//////        long long second = dp[i-4]%1000000;
//////        if(first<=second){
//////            dp[i] = (first+1000000-second)%1000000;
//////        }else{
//////            dp[i]  = (first-second)%1000000;
//////        }
//////    }
////
////    //其实就是一个简单的dp,最骚的还是这个%3
////    for(i = 3;i<n;i++){
////        dp[i%3] = (dp[(i-1)%3]+dp[(i-2)%3]+dp[(i-3)%3]+1)%(1000000);
////    }
////
////    cout<<dp[(i-1)%3]<<endl;
////
////
////}


//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <algorithm>
//#define LL long long int
//using namespace std;
//const int N=100000;
//
//int w[N];
//
//int n,k;
//
////以x为要求的值,返回是否能够得到恰好k组数
//bool check(int x){
//    int sum = 0;
//    int num = 0;
//    for(int i = 1;i<=n;i++){
//        if(sum < x){
//            sum += w[i];
//        }else{
//            sum = w[i];
//            num++;
//            if(num >= k){
//                return false;
//            }
//        }
//    }
//
//    if(sum >= x) num++;
//    if(num >= k) return false;
//    else return true;
//}
//
//int main()
//{
//    scanf("%d%d",&n,&k);
//    for(int i=1;i<=n;i++)
//        scanf("%d",&w[i]);
//    int l=0,r=1e9+5;
//    while(r-l>1){//终止条件不能是两者相等，否则会造成死循环
//        int m = (r+l)/2;
//        if(!check(m)){//如果不能得到结果,说明k太多,所以需要增大m的值
//            l = m;
//        }else{
//            r = m;
//        }
//    }
//
//    printf("%d\n",l);
//}
//
//
