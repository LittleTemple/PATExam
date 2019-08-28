//#include<iostream>
//using namespace std;
//const int maxn = 50;
//
//struct tree{
//    int lchild,rchild;
//}nodes[maxn];
//
//int endIndex = -1,ans;//endIndex相当于开创了一个数组，但是由于只需要数组的长度，所以简化为最后一个节点的下标
//void dfs(int root,int index){
//    if(index > endIndex){//超过就需要扩充数组
//        endIndex = index;
//        ans = root;//每次用当前根节点为ans赋值
//    }
//    if(nodes[root].lchild != -1) dfs(nodes[root].lchild,index*2);
//    if(nodes[root].rchild != -1) dfs(nodes[root].rchild,index*2+1);
//
//}
//int main(){
//    int n,root = 0,ischild[maxn] = {0};//ischild用来记录出现过的所有子节点的下标
//    cin>>n;
//    for(int i = 0;i<n;i++){
//        string lchild,rchild;
//        cin>>lchild>>rchild;
//        if(lchild == "-"){
//            nodes[i].lchild = -1;
//        }else{
//            ischild[stoi(lchild)] = 1;
//            nodes[i].lchild = stoi(lchild);
//        }
//
//        if(rchild == "-"){
//            nodes[i].rchild = -1;
//        }else{
//            ischild[stoi(rchild)] = 1;
//            nodes[i].rchild = stoi(rchild);
//        }
//    }
//
//    while(ischild[root] != 0) root++;
//
//    dfs(root,1);
//
//    if(endIndex == n)
//        cout<<"YES "<<ans;
//    else
//        cout<<"NO "<<root;
//    return 0;
//}