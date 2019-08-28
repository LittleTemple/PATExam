//#include <cstdio>
//#include <cmath>
//#include <map>
//#include <iostream>
//using namespace std;
//
//bool flag[1000001] = {false};
////知道了，估计得用dp
////探查是不是平方数
//bool check(double x){
//    double tmp = sqrt(x);
//    if((int)tmp*(int)tmp == x){
//        return true;
//    }
//    return false;
//}
//
////找到一个数所有的因子
////这里没有考虑2*16的情况,所有不能直接考虑第一个因子，还要考虑第二个
//bool getSplit(int x){
//    if(flag[x]!=0){
//        return flag[x]==1;
//    }
//    for(int i = 2;i<=sqrt(x);i++){
//        if(x%i==0){
//            if(check(i)||check(x/i)){
//                flag[x] = 1;
//                return true;
//            }
//        }
//    }
//    if(check(x)&&(x!=1)){
//        flag[x] = 1;
//        return true;
//    }
//    flag[x] = 2;
//    return false;
//}
//
////从二开始找到所有
//int isOk(int a,int b){
//    int k = 4;
//    int res = 0;
//    while(sqrt(k)<=sqrt(b)){
//        for(int i = b;i>=a;i--){
//            if(flag[i]) continue;
//            if(i % k == 0){
//                res++;
//                flag[i] = true;
//            }
//        }
//        k = sqrt(k)+1;
//        k = k*k;
//    }
//    return res;
//}
//
////用dp吗??
//int main(){
//    int T = 0;
//    scanf("%d",&T);
//
//    for(int i = 0;i<T;i++){
//        int a = 0,b = 0,res = 0;
//        scanf("%d%d",&a,&b);
//
//        res = isOk(a,b);
//
//        if(res == 0) printf("No\n");
//        else{
//            printf("Yes\n");
//            printf("%d\n",res);
//        }
//    }
//
//}