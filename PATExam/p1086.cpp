////#include<iostream>
////#include<stack>
////using namespace std;
////const int maxn = 40;
//////4:06开始
//////每一个pop都是代表一个分支的结束,弹出的最后一个节点就是当前分支的辈分最大的节点.
//////遵从的顺序是先左后右
////struct treeNode{
////    int lchild = -1;
////    int rchild = -1;
////}nodes[maxn];
////
////string input;
////stack<int> s;
////int data,N,pre = 0,pre2 = 0;//这里不能使用index
////
////void postOrder(int root){
////    if(root == -1) return;
////    postOrder(nodes[root].lchild);
////    postOrder(nodes[root].rchild);
////    printf("%d ",root);
////}
////
////int main(){
////    cin>>N;
////    //重新构思一下
////    for(int i = 0;i<2*N;i++){
////        cin>>input;
////
////        cout<<pre<<input<<endl;
////        if(input == "Push"){
////            if(!s.empty()) pre = s.top();
////            cin>>data;
////            s.push(data);
////            if(nodes[pre].lchild == -1) nodes[pre].lchild = data;
////            else nodes[pre].rchild = data;
////        }else{
////            pre2 = s.top();
////            if(!s.empty()) s.pop();
////        }
////    }
////
////    postOrder(1);
////
////
////
////}
//
//#include<iostream>
//#include<stack>
//#include <vector>
//using namespace std;
//
//int N,key = 0,data;
//string str;
//stack<int> s;
//vector<int> pre,in,post,value;
//
//void postOrder(int root,int start,int end){//root是前序遍历的根节点，start是中序遍历的开始节点
//    if(start > end) return;
//    int i = start;
//    while(i < end&&in[i] != pre[root]) i++;
//    postOrder(root+1,start,i-1);
//    postOrder(root+1+i-start,i+1,end);
//    post.push_back(pre[root]);
//
//}
////知道了前序遍历(入栈的顺序就是前序遍历)和中序遍历,要求二叉树
//int main(){
//    cin>>N;
//    for(int i = 0;i<2*N;i++){
//        cin>>str;
//        if(str == "Push"){
//            cin>>data;
//            value.push_back(data);
//            pre.push_back(key);
//            s.push(key);
//            key++;
//        }else{
//            in.push_back(s.top());
//            s.pop();
//        }
//    }
//    postOrder(0,0,N-1);
//    printf("%d",value[post[0]]);
//    for (int i = 1; i < N; ++i) {
//        printf(" %d",value[post[i]]);
//    }
//
//
//}
