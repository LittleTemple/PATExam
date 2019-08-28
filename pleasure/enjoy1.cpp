#include<cstdio>
#include<cstring>
#include <iostream>
using namespace std;
//int n,k,a[50];
//char s[50];
//struct node{//用结构体储存数组；当然，也可以直接用三维数组，不过感觉这样更容易理解
//    int v;bool exi;//v:数位,exi:是否存在
//    int c[50];//高精度数组
//}cut[50][10],ans[50];
//node culc(int l,int r){//取数操作，注意：要从右往左取，因为高精度数组是从低位往高位排的，而读入的数字串是从高位到低位
//    node e;
//    e.v=r-l+1;e.exi=true;
//    for(int i=1;i<=e.v;i++){
//        e.c[i]=a[r-i+1];
//    }
//    return e;
//}
//node mul(node e1,node e2){//高精度乘法
//    node emul;
//    emul.exi=true;
//    emul.v=e1.v+e2.v-1;
//    for(int i=1;i<=emul.v;i++) emul.c[i]=0;
//    for(int i=1;i<=e1.v;i++)
//        for(int j=1;j<=e2.v;j++)
//            emul.c[i+j-1]+=e1.c[i]*e2.c[j];
//
//    int q=0;
//    for(int i=1;i<=emul.v;i++){
//        emul.c[i]+=q;
//        q=emul.c[i]/10;
//        emul.c[i]%=10;
//    }
//
//    while(q>0){
//        emul.c[++emul.v]=q%10;
//        q/=10;
//    }
//    return emul;
//}
//
//node Max(node e1,node e2){//高精度比较，类似字符串（然而如果是字符串的话我就直接strcmp了）
//    if(!e1.exi||e1.v<e2.v) return e2;
//    if(!e2.exi||e2.v<e1.v) return e1;//先比较是否存在和位数
//    for(int i=e1.v;i>=1;i--){//都存在，且位数相同，则逐位比较
//        if(e1.c[i]>e2.c[i]) return e1;
//        else if(e2.c[i]>e1.c[i]) return e2;
//    }
//    return e1;
//}
//
//int main(){
//    scanf("%d%d",&n,&k);
//    scanf("%s",s);
//    for(int i=0;i<n;i++) a[i+1]=s[i]-'0';//将字符串变为数字数组
//    for(int i=1;i<=n;i++){
//        ans[i].exi=false;
//        for(int j=1;j<=k;j++) cut[i][j].exi=false;
//    }
//
//    for(int i=1;i<n;i++){
//        cut[i][1]=culc(1,i);//只放一个乘号的话不需要转移
//        for(int j=2;j<=k;j++){
//            for(int fr=j-1;fr<i;fr++){//因为第i个数后放置的乘号最多是第i个，所以从j-1枚举front（前置位）
//                if(cut[fr][j-1].exi) cut[i][j]=Max(cut[i][j],mul(cut[fr][j-1],culc(fr+1,i)));
//            }
//        } //转移状态
//        if(cut[i][k].exi){
//            ans[i]=mul(cut[i][k],culc(i+1,n));
//        }
//    }
//
//
//    node lastans;lastans.exi=false;
//    for(int i=1;i<n;i++){
//        node tmp=Max(ans[i],lastans);
//        lastans=tmp;//不知道为什么，直接写lastans=Max(lastans,ans[i])总是会错，然而加一个中间变量就过了。。
//    }
//    for(int i=lastans.v;i>=1;i--) printf("%d",lastans.c[i]);//输出
//    return 0;
//}//写完注释感觉就像白痴代码一样啊。。。（内心：那你还写了半个上午？？？）


//还是没懂
//尝试着写一下，我感觉我差不多懂了
//x表示插入乘号的个数,ans表示当前乘积，last表示最后一个乘号的位置

int a[50] = {0};
int n,k,res,mul ;
char c;
void dfs(int x,int ans,int last){
    for(int i = last-1;i>0;i--){
        mul = 0;
        for(int j = last-1;j>i;j--){
            mul += a[j];
            mul *= 10;
        }
        mul += a[i];
        res = max(res,ans*mul);
        dfs(x+1,ans*mul,i);

    }
}

int main(){
    cin>>n>>k;
    for(int i = 0;i<n;i++){
        cin>>c;
        a[i] = c-'0';
    }

    dfs(0,1,n-1);
    cout<<res;
}