#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int C1 = 0,C2 = 0;
    scanf("%d%d",&C1,&C2);
    //c++怎么实现四舍五入?
    int res = C2-C1;
    if(res % 100  >= 50) res = res/100+1;
    else res /= 100;

    //这里需要补0的地方
    printf("%02d:%02d:%02d",res/3600,res%3600/60,res % 60);




}