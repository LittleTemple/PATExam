//#include<cstdio>
//#include<vector>
//#include<map>
//using namespace std;
///*
//    写自己的思路，分析别人的思路
//    1.用一个map，用来存放对应的指数和系数值
//    2.map的长度就是要输出的第一个值，之后逆序输出
//    -----------------
//    存在一个问题??:
//
//*/
//map<int,double> m;
//int K,tmpExp;
//double tmpCoff;//第一个是指数，第二个是系数
//
//int main(){
//    for(int i = 0;i<2;i++){
//        scanf("%d",&K);
//        for(int j = 0;j<K;j++){
//            scanf("%d%lf",&tmpExp,&tmpCoff);
//            m[tmpExp] += tmpCoff;
//        }
//    }
//
//    int len = m.size();
//   for(auto item:m){
//       if(item.second == 0) len--;
//   }
//    printf("%d",len);
//
//    map<int,double>::reverse_iterator iter;
//    for(iter = m.rbegin();iter!=m.rend();iter++){
//        if(iter->second == 0) continue;
//        printf(" %d %.1f",iter->first,iter->second);
//    }
//
//
//}
