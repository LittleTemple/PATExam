//#include<iostream>
//#include<cmath>
//using namespace std;
//const int maxn = 10010;
////int isPrime[maxn] = {true};//true表示为素数
////还有进制转化
////void getTable(){
////    fill(isPrime,isPrime+maxn,true);//注意这里需要fill一下，使用false的时候就不需要，不知道为什么
////    for(int i = 2;i<maxn;i++){
////        if(isPrime[i]){
////            for(int j = i+i;j<maxn;j+=i){
////                isPrime[j] = false;
////            }
////        }
////    }
////}
//bool isPrime(int n){
//    if( n <= 1) return false;
//    int tmp = sqrt(n*1.0);
//    for(int i = 2;i<=tmp;i++){
//        if(n % i == 0) return false;
//    }
//    return true;
//
//}
//int n,d;
//int main(){
//    while(cin>>n){
//        if(n < 0) break;
//        cin>>d;
//        if(!isPrime(n)){
//            cout<<"No"<<endl;
//            continue;
//        }
//        int arr[100],num = 0;
//        do{
//            arr[num++] = n%d;
//            n /= d;
//        }while(n!=0);
//        for(int i = 0;i<num;i++){
//            n  = n*d +arr[i];
//        }
//        if(isPrime(n)) cout<<"Yes"<<endl;
//        else cout<<"No"<<endl;
//    }
//    return 0;
//
//}