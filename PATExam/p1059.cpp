//#include<iostream>
//#include<cmath>
//#include<vector>
//using namespace std;
//const int maxn = 100010;
//bool isPrime[maxn] = {true};
//void getTable(){
//    fill(isPrime,isPrime+maxn,true);
//    isPrime[1] = false;
//    for(int i = 2;i<maxn;i++){
//        if(isPrime[i]){
//            for(int j = i+i;j<maxn;j+=i) isPrime[j] = false;
//        }
//    }
//}
//int n,sqr,s,flag = 0;
//
//int main(){
//    getTable();
//    cin>>n;
//    if(n == 1) {
//        cout<<"1=1";
//        return 0;
//    }
//    s = n;
//    cout<<n<<"=";
//    sqr = sqrt(n*1.0);
//    for(int i = 2;i<=sqr;i++){
//        //可以将结果存储，也可以不存储
//        int num = 0;
//        while(isPrime[i]&&n % i == 0){
//            num++;
//            n /= i;
//        }
//        if(num == 0) continue;
//        if(flag != 0) cout<<"*";
//        if(num == 1) cout<<i;
//        else cout<<i<<"^"<<num;
//        flag = 1;
//    }
//    if(n != 1) cout<<n;
//
//    return 0;
//
//}