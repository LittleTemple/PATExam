//树状数组
//算法笔记第13章
//其实树状数组就是数组，一般用来存放元素的个数
//只不过对数组进行了优化,让时间复杂度降到了logn级别
//统计序列A中在元素x左边比该元素小的元素的个数
//其中x <= (10,9),A.size()<=(10,5),A[i]<=10^5
//必须要保证原数组是有序的吗?
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 100010;
#define lowbit(i) ((i)&(-i))
int c[maxn];//定义一个树状数组
int A[maxn];//定义离散化后的初始数组
struct Node{
    int val;
    int pos;
}temp[maxn];

void update(int x,int v){
    for(int i = x;i<maxn;i+=lowbit(i)){
        c[i] += v;
    }
}

bool cmp(Node a,Node b){
    return a.val<b.val;
}

int getSum(int x){
    int sum = 0;
    for (int i = x; i > 0; i -= lowbit(i)) {
        sum += c[i];
    }
    return sum;
}


int main(){
    int n,x;
    scanf("%d",&n);
    memset(c,0, sizeof(c));
    for(int i = 0;i<n;i++){
        scanf("%d",&temp[i].val);
        temp[i].pos = i;
    }

    for(int i = 0;i<n;i++){
       printf("pos:%d,val:%d",temp[i].pos,temp[i].val);
    }

    sort(temp,temp+n,cmp);
    for (int i = 0; i < n; ++i) {
        if(i == 0||temp[i].val != temp[i-1].val){
            A[temp[i].pos] = i+1;
        }else{
            A[temp[i].pos] = A[temp[i-1].pos];
        }
    }

    for(int i = 1;i<n;i++){
        printf("pos:%d,val:%d",i,A[i]);
    }





}
