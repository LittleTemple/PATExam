//#include<iostream>//老是打成stido
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxn = 110;
//struct node{
//    int layer;
//    vector<int> child;
//}Node[maxn];
//
//int levelLeaf[maxn],height;
//int N,M;
//
//void layerOrder(int root){
//    queue<int> q;
//    q.push(root);
//    Node[root].layer = 0;
//    while(!q.empty()){
//        int front = q.front();
//        q.pop();
//        if(Node[front].child.size() == 0) levelLeaf[Node[front].layer]++;
//        for(int i = 0;i<Node[front].child.size();i++){
//            int child = Node[front].child[i];
//            Node[child].layer = Node[front].layer+1;
//            q.push(child);
//        }
//        height = Node[front].layer;
//
//    }
//
//    cout<<levelLeaf[0];
//    for(int i = 1;i<=height;i++){
//        cout<<" "<<levelLeaf[i];
//
//    }
//
//}
//
//int transmit(string str){
//    if(str[0] == '0') return (str[1]-'0');
//    else return ((str[0]-'0')*10+str[1]-'0');
//}
//int main(){
//    //需要对输入的值进行处理
//    //你会因为一次失败而停止脚步吗?
//    //如果不会，那么就是成功!
//    cin>>N>>M;
//    for(int i = 0;i<M;i++){
//        string p;
//        int k,father;
//        cin>>p>>k;
//        father = transmit(p);
//        for(int j = 0;j<k;j++){
//            string c;
//            cin>>c;
//            Node[father].child.push_back(transmit(c));
//        }
//    }
//    layerOrder(1);
//
//
//}
//
