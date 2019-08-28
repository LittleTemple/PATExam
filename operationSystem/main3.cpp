#include <stdio.h>
#include <stdlib.h>
/*全局变量*/
int mSIZE; /*物理块数*/
int pSIZE; /*页面号引用串个数*/
static int memery[10]={0}; /*物理块中的页号*/
static int page[100]={0}; /*页面号引用串*/
static int temp[100][10]={0}; /*辅助数组*/
/*置换算法函数*/
void OPT();
/*辅助函数*/
void print(unsigned int t);
void download();
void mDelay(unsigned int Delay);
/*主函数*/
int main()
{
    int i,k,code;
    printf("请输入物理块的个数(M<=10)：");
    scanf("%d",&mSIZE);
    printf("请输入页面号引用串的个数(P<=100)：");
    scanf("%d",&pSIZE);
    puts("请依次输入页面号引用串(连续输入，无需隔开)：");
    for(i=0;i<pSIZE;i++)
        scanf("%1d",&page[i]);
    download();
    do{
        puts("输入的页面号引用串为：");
        for(k=0;k<=(pSIZE-1)/20;k++)
        {
            for(i=20*k;(i<pSIZE)&&(i<20*(k+1));i++)
            {
                if(((i+1)%20==0)||(((i+1)%20)&&(i==pSIZE-1)))
                    printf("%d\n",page[i]);
                else
                    printf("%d   ",page[i]);
            }
        }
        printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("* 请选择页面置换算法：\t\t\t    *\n");
        printf("* ----------------------------------------- *\n");
        printf("* 1.最佳(OPT)         2.退出                *\n");
        printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("请选择操作：[ ]\b\b");
        scanf("%d",&code);
        switch(code)
        {
            case 1:
                OPT();
                break;
            case 2:
                exit(0);
            default:
                printf("输入错误，请重新输入：");
        }
        printf("按任意键重新选择置换算法：>>>");
        //getch();
    }while (code!=4);
    getchar();
}
/*载入数据*/
void download()
{
    int i;
    getchar();
}
/*设置延迟*/
void mDelay(unsigned int Delay)
{
    unsigned int i;
    for(;Delay>0;Delay--)
    {
        for(i=0;i<124;i++)
        {
            printf(" \b");
        }
    }
}

void print(unsigned int t)
{
    int i,j,k,l;
    int flag;
    for(k=0;k<=(pSIZE-1)/20;k++)
    {
        for(i=20*k;(i<pSIZE)&&(i<20*(k+1));i++)
        {
            if(((i+1)%20==0)||(((i+1)%20)&&(i==pSIZE-1)))
                printf("%d\n",page[i]);
            else
                printf("%d   ",page[i]);
        }
        for(j=0;j<mSIZE;j++)
        {
            for(i=20*k;(i<mSIZE+20*k)&&(i<pSIZE);i++)
            {
                if(i>=j)
                    printf(" |%d|",temp[i][j]);
                else
                    printf(" | |");
            }
            for(i=mSIZE+20*k;(i<pSIZE)&&(i<20*(k+1));i++)
            {
                for(flag=0,l=0;l<mSIZE;l++)
                    if(temp[i][l]==temp[i-1][l])
                        flag++;
                if(flag==mSIZE)/*页面在物理块中*/
                    printf("    ");
                else
                    printf(" |%d|",temp[i][j]);
            }
            /*每行显示20个*/
            if(i%20==0)
                continue;
            printf("\n");
        }
    }
    printf("----------------------------------------\n");
    printf("缺页次数：%d\t\t",t+mSIZE);
    printf("缺页率：%d/%d\n",t+mSIZE,pSIZE);
    printf("置换次数：%d\t\t",t);
    printf("访问命中率：%d%%\n",(pSIZE-(t+mSIZE))*100/pSIZE);
    printf("----------------------------------------\n");
}
/*计算过程延迟*/
void compute()
{
    int i;
    printf("正在进行相关计算，请稍候");
}



/*最佳置换算法*/
void OPT()
{
    int memery[10]={0};
    int next[10]={0}; /*记录下一次访问时间*/
    int i,j,k,l,m;
    int max; /*记录换出页*/
    int count=0; /*记录置换次数*/
    /*前mSIZE个数直接放入*/
    for(i=0;i<mSIZE;i++)
    {
        memery[i]=page[i];
        for(j=0;j<mSIZE;j++)
            temp[i][j]=memery[j];
    }
    for(i=mSIZE;i<pSIZE;i++)
    {
        /*判断新页面号是否在物理块中*/
        for(j=0,k=0;j<mSIZE;j++)
        {
            if(memery[j]!=page[i])
                k++;
        }
        if(k==mSIZE) /*如果不在物理块中*/
        {
            count++;
            /*得到物理快中各页下一次访问时间*/
            for(m=0;m<mSIZE;m++)
            {
                for(l=i+1;l<pSIZE;l++)
                    if(memery[m]==page[l])
                        break;
                next[m]=l;
            }
            /*计算换出页*/
            max=next[0]>=next[1]?0:1;
            for(m=2;m<mSIZE;m++)
                if(next[m]>next[max])
                    max=m;
            /*下一次访问时间都为pSIZE,则置换物理块中第一个*/
            memery[max]=page[i];
            for(j=0;j<mSIZE;j++)
                temp[i][j]=memery[j];
        }
        else {
            for(j=0;j<mSIZE;j++)
                temp[i][j]=memery[j];
        }
    }
    compute();
    print(count);
}
