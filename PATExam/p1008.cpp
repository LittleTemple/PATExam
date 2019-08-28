////这题也比较简单
//#include<cstdio>
//using namespace std;
//const int maxn = 10000;
//int n,request[maxn],total;
//
//int main(){
//    scanf("%d",&n);
//    for(int i = 0;i<n;i++){
//        scanf("%d",&request[i]);
//    }
//
//    //加上最初的起步
//    total += request[0]*6;
//    for(int i = 1;i<n;i++){
//        int dis = request[i]-request[i-1];
//        if( dis > 0){
//            total += dis*6;
//        }else if(dis < 0){
//            total -= dis*4;
//        }
//    }
//    total += 5*n;
//    printf("%d",total);
//
//
//}