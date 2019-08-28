////先序遍历和后序遍历结合的题目，还没见过呢
////尝试着自己写一下
//#include<cstdio>
//#include <vector>
//using namespace std;
//vector<int> pre,inorder,post;
//bool u = true;
//int N;
//
////为什么有一个树为空树就不唯一呢??
//void create(int preL,int preR,int postL,int postR){
//    if(preL ==  preR){//就是这里还是没太懂
//        inorder.push_back(pre[preL]);
//        return;
//    }
//    if(pre[preL] == post[postR]){
//        int i = preL+1;
//        while(i<=preR && pre[i] != post[postR-1])  i++;
//        int numL = i-1-preL;
//        if(numL <= 0) u = false;
//
//        create(preL+1,  i-1,postL,postL+numL-1);//这里创建子树的地方还是不太懂
//        inorder.push_back(post[postR]);
//        create(i,preR,postL+numL,postR-1);
//    }
//}
//int main(){
//    scanf("%d",&N);
//    pre.resize(N),post.resize(N);
//    for(int i = 0;i<N;i++) scanf("%d",&pre[i]);
//    for(int i = 0;i<N;i++) scanf("%d",&post[i]);
//    create(0,N-1,0,N-1);
//    printf("%s\n",u  ? "Yes":"No");
//    printf("%d",inorder[0]);
//    for(int i = 1;i<N;i++) printf(" %d",inorder[i]);
//    printf("\n");
//
//}
