//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    int T;
//    cin>>T;
//    for(int i = 0;i<T;i++){
//        int fiveNum = 0;
//        int twoNum = 0;
//        int tenNum = 0;
//        long long left  = 0;
//        int leftZero = 0;
//        long long  res = 0;
//        long long  N = 0,K = 0,orgin = 0;
//        cin>>N>>K;
//        orgin = N;
//
//        //统计各自的个数
//        while(N%10 == 0){
//            tenNum++;
//            N /= 10;
//            if(N%10 != 0) break;
//        }
//        left = N;
//
//
//        leftZero = K - tenNum;
//        if(leftZero <= 0){
//            cout<<orgin<<endl;
//            continue;
//        }
//
//        while(N%5 == 0){
//            fiveNum++;
//            N /= 5;
//            if(N%5 != 0) break;
//        }
//        left = N;
//
//
//        while(N % 2 == 0){
//            twoNum++;
//            N /= 2;
//            if(N%2 != 0) break;
//        }
//        left = N;
//
//
//        //也就是还有leftZero个0,每个0可以容纳一个5或是2
//        if(fiveNum != 0 ){
//            if(fiveNum <= leftZero) res = left*pow(10,K);
//            else res = left*pow(5,fiveNum-leftZero)*pow(10,K);
//        }
//
//        if(twoNum != 0){
//            if(twoNum <= leftZero) res = left*pow(10,K);
//            else res = left*pow(2,twoNum-leftZero)*pow(10,K);
//        }
//
//        if(twoNum == 0&&fiveNum == 0){
//            res = left*pow(10,K);
//        }
//
//        cout<<res<<endl;
//
//
//
//
//    }
//
//
//
//
//}