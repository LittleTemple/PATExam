//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct  node{
//    int addr,key,next;
//    bool flag;
//}nodes[100000];
//
////返回true,也就是不需要移动。返回false,则是需要交换两个的位置
////默认a在前，b在后
////将所有的有效数字都挤到前面，牛逼
//
//bool cmp(node a,node b){
//    //如果flag为false,就把其移动到后面
//    if(a.flag && b.flag) return a.key < b.key;
//    else return a.flag > b.flag;
//}
//
//int main(){
//    int n,cnt = 0,s,a,b,c;
//    scanf("%d%d",&n,&s);
//    for(int i = 0;i<n;i++){
//        scanf("%d%d%d",&a,&b,&c);
//        nodes[a] ={a,b,c,false};
//    }
//
//    for(int i = s;i!=-1;i=nodes[i].next){
//        nodes[i].flag = true;
//        cnt++;
//    }
//
//
//    if(cnt == 0) printf("0 -1");
//    else{
//        sort(nodes,nodes+100000,cmp);
//        printf("%d %05d\n",cnt,nodes[0].addr);
//        for(int i = 0; i < cnt; i++) {
//            printf("%05d %d ", nodes[i].addr, nodes[i].key);
//            if(i != cnt - 1)
//                printf("%05d\n", nodes[i + 1].addr);
//            else
//                printf("-1\n");
//        }
//    }
//    return 0;
//}
