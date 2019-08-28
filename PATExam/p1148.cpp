////我的第一想法是回溯，直接遍历所有的情况，一个一个试探。
////第二想法是设置一个0，1数组，或者是bool类型的数组。如果是狼人的话就赋值为1，不是的话就赋值为0.
////本质上还是使用深搜的思想，但是可以直接使用数组来实现
//
////依次遍历输入数组，对flag数组进行赋值，用一个数来记录liar的人数和wolves的人数。
////最终的终止条件是：index>n-1,且liar,wolves都满足条件。
////越看越像深搜，用深搜试一下.
////0表示人，1表示狼人,2表示冲突
//
//
////第三个想法，我可以判断哪两个人说谎啊，之后按照这个去推断就好了。
////时间复杂度n^2
////没有章法，还是用深搜试试
////深搜的问题是，一旦出现冲突怎么办？
////产生冲突不就是深搜中的分叉路口吗？！！！
////为了方便计算，所以事先先塞一个0
////为什么不会回退啊
//#include<stdio.h>
//#include<vector>
//using namespace std;
//
//int n = 0;
//vector<int> input,flag;
//void dfs(int index,int wolves,int liar){
//    if(index>n) {
//        if ((wolves == 2) && (liar == 2)) {
//            for (int i = 1; i <= n; i++) {
//                if (flag[i] == -1) {
//                    printf("%d ", i);
//                }
//            }
//            return;
//        }else if(wolves == 2){
//            return;
//        }
//    }
//
//
//    int dics = input[index];
//
//    int pre = flag[abs(dics)];
//    if(dics<0){
//        wolves++;
//    }
//    if(flag[abs(dics)] == 0){
//        flag[abs(dics)] = dics/abs(dics);
//        dfs(index+1,wolves,liar);
//    }else{
//        //第一个人说谎
//        liar++;
//        flag[abs(dics)] = dics/abs(dics);
//        dfs(index+1,wolves,liar);
//        liar--;
//
//        //第二个人说谎
//        liar++;
//        flag[abs(dics)] = pre;
//        dfs(index+1,wolves,liar);
//        liar--;
//
//    }
//}
//int main(){
//    scanf("%d",&n);
//    input.push_back(0);
//    flag.push_back(0);
//    for(int i = 0;i<n;i++){
//        int tmp = 0;
//        scanf("%d",&tmp);
//        input.push_back(tmp);
//        flag.push_back(0);
//    }
//    dfs(1,0,0);
//
//
//
//
//
//
//}
