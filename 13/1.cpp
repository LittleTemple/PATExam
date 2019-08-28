////分块的思想
//#include <cstdio>
//#include <cstring>
//#include <stack>
//using namespace std;
//const  int maxn = 100010;
//const  int sqrN = 316;//将数组划分为根号N块
//
//stack<int> st;
////关键其实就是一个是块一个数hash表,
//int block[sqrN];//每一块拥有的数字的数量
//int table[maxn];//相当于一个hash表,用来存放每一个数的数量
//
////大体的思想就在这里
//void peekMedian(int K){
//    //首先判断是在哪块
//    int sum = 0;
//    int idx = 0;
//    while(sum + block[idx] < K){
//        sum += block[idx];
//        idx++;
//    }
//
//
//    int num = idx*sqrN;
//    while(sum + table[num] < K){
//        sum += table[num];
//        num++;
//    }
//
//    printf("%d\n",num);
//}
//
//void Push(int x){
//    st.push(x);
//    //大数放在大块号里
//    block[x / sqrN]++;
//    table[x]++;
//}
//
//void Pop(){
//    int x = st.top();
//    st.pop();
//    block[x/sqrN]--;
//    table[x]--;
//    printf("%d\n",x);
//}
//
//int main(){
//    int x,query;
//    memset(block,0, sizeof(block));
//    memset(table,0, sizeof(table));
//
//    char order[20];
//    scanf("%d",&query);
//    for (int i = 0; i < query; ++i) {
//        //...
//    }
//
//}
//
//
//
