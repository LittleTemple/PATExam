////将一系列不同的正整数插入到hash表中，输出插入的位置.
////hash表的功能是key = key%Tsize.
////使用二次探查法进行查重
////如果不是质数，就找到比当前值大的最小质数
//
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//const int maxn = 10010;
//
//int list[10010] = {0};
//bool isPrime(int n){
//    if(n == 1) return false;
//    int sqr = sqrt(n*1.0);
//    for(int i = 2;i<=sqr;i++){
//        if(n % i == 0) return false;
//    }
//    return true;
//}
//
//int msize,n,pos;
//int main(){
//    cin>>msize>>n;
//    if(!isPrime(msize)){
//        for(int i = msize+1;i<maxn;i++){
//            if(isPrime(i)){
//                msize = i;
//                break;
//            }
//        }
//    }
//
//    for(int i = 0;i<n;i++){
//        cin>>pos;
//        int flag = 0;
//        for(int j = 0;j<msize;j++){
//            if(list[(j*j+pos)%msize] == 0){
//                list[(j*j+pos)%msize]  = 1;
//                cout<<(j*j+pos)%msize;
//                flag = 1;
//                break;//忘记结束循环了
//            }
//        }
//        if(flag == 0) cout<<"-";
//        if(i < n-1) cout<<" ";
//    }
//    return 0;
//
//
//}