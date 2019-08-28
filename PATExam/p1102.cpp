//#include<iostream>
//#include <queue>
//using namespace std;
//const int maxn = 20;
//struct tree{
//    int l,r;
//}nodes[maxn];
//
//int root,N,have[maxn],num = 0;
//void level(int root){
//    queue<int> q;
//    q.push(root);
//    while(!q.empty()){
//        int front = q.front();
//        q.pop();
//        if(q.size() == 0&&nodes[front].l == -1&&nodes[front].r == -1)
//            cout<<front;
//        else
//            cout<<front<<" ";//这里怎么处理最后的空格??
//        if(nodes[front].l!=-1) q.push(nodes[front].l);
//        if(nodes[front].r!=-1) q.push(nodes[front].r);
//    }
//
//}
//
//void inshow(int root){
//    if(root == -1) return;
//    inshow(nodes[root].l);
//    cout<<root;
//    if(num != N-1)
//        cout<<" ";
//    num++;
//
//    inshow(nodes[root].r);
//}
//int main(){
//    cin>>N;
//    for(int i = 0;i<N;i++){
//        string l,r;
//        cin>>r>>l;
//        if(l == "-"){
//            nodes[i].l = -1;
//        }else{
//            nodes[i].l = stoi(l);
//            have[stoi(l)] = 1;
//        }
//
//        if(r == "-"){
//            nodes[i].r = -1;
//        }else{
//            nodes[i].r = stoi(r);
//            have[stoi(r)] = 1;
//        }
//    }
//    while(have[root]!=0) root++;//妙啊妙啊
//
//    level(root);
//    cout<<endl;
//    inshow(root);
//
//
//
//
//}