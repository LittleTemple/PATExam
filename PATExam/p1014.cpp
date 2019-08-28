////14:30分开始
////15:18分终止
////15:32继续
//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
////思路:
////1.当做模拟题来做。使用N个队列。
////首先定义一个结构体，数据是id和结束的时间
////之后定义一个bool 数组，用来存放每个下标接收服务的时间是否超过17:00.
////将所有的消耗时间的数据，存入到表中。
////首先遍历所有的队列，查看是否有未被占满的队列，如果有，累加队尾的时间和当前数值，并将其插入到队尾。
////如果没有未被占满的队列，则找到最早结束的队列，将其队头弹出，累加队尾的时间和当前数值，并更新最早结束时间。
////还有一个时间计算的问题
//
////2.本题还有并查集的思路
//const int maxn = 1010;
//int N,M,K,Q;
//vector<int> ptime;//每个顾客服务的时间
//vector<bool> isOver;
//vector<int> res;//用来记录所有的结果
//queue<int> q[maxn];
//
//int main(){
//    cin>>N>>M>>K>>Q;
//    ptime.resize(K+1);
//    isOver.resize(K+1);
//    res.resize(K+1);
//    //对人初始化
//    for(int i = 1;i<=K;i++){
//        int time;
//        cin>>time;
//        ptime[i] = time;//输入每个人的时间
//        isOver[i] = false;
//    }
//
//    for(int j = 0;j<N;j++){
//        q[j].push(480);
//    }
//
//
//
//    //对所有的顾客进行遍历
//    for(int i = 1;i<=K;i++){
//        //遍历所有窗口,目标有两个，找到最短的一个和找到最早的一个.这里的最早是指开头最早，最早走
//        int shortPos = -1,ealyPos = -1,shortMin = M+2,earlyMin = 10000;
//        for(int j = N-1;j>=0;j--){//逆序遍历，好麻烦
//            //特殊情况，如果当前下标队列为空，直接插入到当前下标的队列中
//            if(q[j].size() <= shortMin){
//                shortMin = q[j].size();
//                shortPos = j;
//            }
//
//            if(q[j].front() <= earlyMin){
//                earlyMin = q[j].front();
//                ealyPos = j;
//            }
//
//        }
//
//        //如果存在没有满的，直接使用最短的。如果全满了，使用最早的
//        if(shortMin < M){
//            if(q[shortPos].back() >= 1020) isOver[i] = true;//如果上一个已经超过17:00,将超过置为true
//            res[i] = q[shortPos].back()+ptime[i];
////            printf("%d-%d\n",i,res[i]);
//            q[shortPos].push(q[shortPos].back()+ptime[i]);
//        }else{
//            if(q[ealyPos].back() >= 1020) isOver[i] = true;//如果上一个已经超过17:00,将超过置为true
//            res[i] = q[ealyPos].back()+ptime[i];
////            printf("%d-%d\n",i,res[i]);
//            q[ealyPos].pop();
//            q[ealyPos].push(q[ealyPos].back()+ptime[i]);
//        }
//    }
//
//    //查询数组
//    for(int i = 0;i<Q;i++){
//        int query;
//        cin>>query;
//        //开始查询
//        int time = res[query];
//
//        int hour = time/60;
//        int mintiue = time%60;
//        if(!isOver[query])
//            printf("%02d:%02d\n",hour,mintiue);
//        else
//            printf("Sorry\n");
//
//    }
//
//    return 0;
//
//}