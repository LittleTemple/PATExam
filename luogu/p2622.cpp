
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
#include<cstdio>
using namespace std;

int read()
{
    int f=1,x=0;
    char ss=getchar();
    while(ss<'0'||ss>'9'){if(ss=='-')f=-1;ss=getchar();}
    while(ss>='0'&&ss<='9'){x=x*10+ss-'0';ss=getchar();}
    return f*x;
}

void print(int x)
{
    if(x<0){putchar('-');x=-x;}
    if(x>9)print(x/10);
    putchar(x%10+'0');
}

int n,m;
int a[110][1010];
struct node{int s,step;};//s存储状态，step存储当前步数
bool vis[1000010];

int spfa()
{
    int ss;
    queue<node> q;
    q.push( (node) {(1<<n)-1,0} );
    vis[(1<<n)-1]=true;//以全开为初始状态，二进制为n个1，十进制如代码


    while(!q.empty())
    {
        node u=q.front();
        q.pop();
        if(u.s==0){return u.step;}//若状态为0，则返回当前步数

        //这里为啥是m个状态，还是有点没有看懂，现在先放一放
        for(int i=1;i<=m;i++)
        {
            ss=u.s;
            for(int j=1;j<=n;j++)//由于开关对所有灯都影响，所以每个灯都遍历
            {
                if( a[i][j]==1 && (ss&(1<<j-1)) ) ss^=(1<<j-1);
                else if( a[i][j]==-1 && !(ss&(1<<j-1)) ) ss|=(1<<j-1);
            }//位运算解释如上文本

            if(!vis[ss])//若该状态未访问，就加入队列
            {
                q.push( (node) {ss,u.step+1} );
                vis[ss]=true;
            }
        }
    }
    return -1;
}

int main()
{
    n=read();m=read();
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            a[i][j]=read();//保存每个开关操作对灯的影响

    print(spfa());
    return 0;
}