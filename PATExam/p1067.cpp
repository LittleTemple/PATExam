//#include<cstdio>
//#include<vector>
//#include <algorithm>
//using namespace std;
////每次跟应该在该位置上的元素交换就可以了
//const  int maxn = 100010;
//int pos[maxn];
//int main(){
//    int n,ans = 0,num;
//    scanf("%d",&n);
//    for (int i = 0; i < n; ++i) {
//        scanf("%d",&num);
//        pos[num] = i;
//    }
//    for(int i = 1;i<n;i++){
//        if(i != pos[i]){//首先判断i是否归位
//            while(pos[0] != 0){//i没有归位，就用0去交换其对应的下标位置
//                swap(pos[0],pos[pos[0]]);
//                ans++;
//            }
//            //会有将0换到有序位置，而其他未到有序位置。
//            //此时找到一个没到有序位置的，进行交换
//            if(i != pos[i]){ //这里之所以再来一遍，是因为上面可能会让顺序改变
//                swap(pos[0],pos[i]);
//                ans++;
//            }
//        }
//    }
//
//
//    printf("%d\n",ans);
//
//}