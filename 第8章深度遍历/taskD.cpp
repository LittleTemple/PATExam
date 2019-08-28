/////*
//// * n皇后问题：
//// * 就是试。
//// * 首先初始化一个二维数组，用来表示皇后的位置
//// * 假设是第i行了，那么此时的操作是，从0~n-1遍历数组。排除上一行中被选中下标的减一加一相等三种情况，如果存在将其赋值为1。
//// * 之后将其赋值为0，判断当前行其他存在的情况。
//// * 终止条件：
//// * 能够最后达到n
//// *
//// * 需要的参数：
//// * 行数row,上一层选择的下标
//// * */
////#include<stdio.h>
////#include <vector>
////using namespace std;
////const int maxn = 10;
////int arr[maxn];//用来存放每行皇后的位置
////int n = 0;
////vector<int> ans,temp;
////
////
////void queen(int row){
////    if(row == n){//如果是从0开始变的话，等于n就结束了。
////        return;
////    }
////    for(int i = 0;i<n;i++){
////
////    }
//////    for(int i = 0;i<n;i++){
//////        printf("%d ",arr[i]);
//////    }
//////    printf("\n");
//////    vector<int> list;
////
//////    bool passAll = false;
//////    for(int i = 0;i<n;i++){//找到现在所有下标中符合条件的i
//////        for(int j = 0;j<row;j++){
//////            if((row-j)==(abs(arr[j]-i))){//这个地方不知道该怎么办了
//////                break;
//////            }
//////            if(j == row-1){
//////                passAll = true;
//////            }
//////        }
//////
//////        if(passAll||row==0){
//////            list.push_back(i);
//////        }
//////    }
////
////
////
//////    for(int i = 0;i<list.size();i++){
//////        arr[row] = list[i];
//////        queen(row+1);
//////        arr[row] = -1;
//////    }
////
////
////
////}
////int main(){
////    scanf("%d",&n);
////    for(int i = 0;i<n;i++){//这儿进行了修改，把所有的初始化值都变为-1，防止为0时出现错误
////        arr[i] = -1;
////    }
////    queen(0);
////}
//
//#include<stdio.h>
//#include <vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//const int maxn = 11;
//int arr[maxn];//用来存放每行皇后的位置
//int n = 0;
//vector<int> ans;
//
//void queen(int row){
//    if(row == n+1){
//        for(int i=0;i<n;i++){
//            printf("%d ",ans[i]);
//        }
//        printf("\n");
//        return;
//    }
//
//    //在第row行，产生岔路口,判断符合条件的位置
//    int i = 1;
//    for(;i<=n;i++){
//        int j = 1;
//        for(;j<row;j++){
//            if((abs(row-j) == abs(arr[j]-i))||(arr[j] == i)){
//                break;
//            }
//        }
//        if(j == row){
//            ans.push_back(i);
//            arr[row] = i;
//            queen(row+1);
//            ans.pop_back();
//        }
//    }
//
//}
//
//int main(){
//    scanf("%d",&n);
//    queen(1);
//    if(ans.size()<n){
//        printf("no solute!");
//    }
//    return 0;
//}