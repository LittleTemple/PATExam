#include<stdio.h>
#include<map>
using namespace std;
const int maxn = 21;
int n = 0;
int ans = 0;

//模拟栈的运行
void dfs(int index,int top,int arr[]){//top用来表示栈中数的个数
    if(index == n){//这里还需要判断top的位置吗？不需要,但是我不知道为啥,不需要。因为只要最后index==n了，默认最后一次性弹出
        ans++;
        return;
    }


    //怎么对下面两个进行剪枝??
    //不太好剪枝
    //加入当前的数字
    dfs(index+1,top+1,arr);

    if(top>0){
        //弹出当前栈顶元素,保留对当前index的判断
        dfs(index,top-1,arr);
    }


}
int main(){
    while((scanf("%d",&n)!=EOF)){
        ans = 0;
        int arr[maxn];
        for(int i = 0;i<n;i++){
            arr[i] = i+1;
        }
        dfs(0,0,arr);
        printf("%d\n",ans);
    }

}