//#include<stdio.h>
//#include<stack>
//using namespace std;
//
//int ans = 0;
//int n = 0;
//
////我还是搞不太清楚，关于什么时候需要加之后减，什么时候不需要减
//stack<int> s;
//void rb(int index,int size){//表示栈的大小
//    if(size==n){
//        ans++;
//        return;
//    }
//
//    //可以进栈的情况
//    s.push(index);//这儿存在的问题
//    int len = s.size();
//    printf("before %d\n",len);
//    rb(index+1,len);
//    s.pop();
//    len--;
//
//    //可以出栈的情况
//    if(len>0){
//        s.pop();
//        int len = s.size();
//        rb(index,len);
//    }
//}
//int main(){
//    scanf("%d",&n);
//    stack<int> s;
//    rb(1,0);
//    printf("%d\n",ans);
//}
////
//////#include <cstdio>
//////int n,top=0,sum=0;
//////void DFS(int index,int top){
//////    if(index==n){
//////        sum++;
//////        return;
//////    }
//////    DFS(index+1,top+1);
//////    if(top>0){
//////        DFS(index,top-1);
//////    }
//////}
//////int main(){
//////    scanf("%d",&n);
//////    DFS(0,0);
//////    printf("%d\n",sum);
//////    return 0;
//////}