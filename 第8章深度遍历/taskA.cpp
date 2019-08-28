////这个题目的整体思路就是：
////有三个岔路口，A，B，C
////要求每次经过一个岔路口都要选择一个数x。之后进入下一个岔路口。要求这个x不能和以前的重复。
////#include<stdio.h>
////#include<vector>
////using namespace std;
////const int maxn = 10;
////int n = 0;
////int arr[maxn];
////vector<int> ans;
////
//////要考虑的第一个问题，传递哪些参数?
////void rb(int index){//表示的是当前判定的是哪一个岔路口
////    if(index == n){//死胡同
////        for(auto num:ans){
////            printf("%d ",num);
////        }
////        printf("\n");
////        return;
////    }
////
////    //岔路口
////    for(int i = index;i<n;i++){
////        //将选中的放到前面
////        int temp = arr[index];
////        arr[index] = arr[i];
////        arr[i] = temp;
////
////        ans.push_back(arr[index]);
////        rb(index+1);
////
////        //这里还需要对其进行还原，因为需要重新进行选择了。所以必须保持原状
////        temp = arr[index];
////        arr[index] = arr[i];
////        arr[i] = temp;
////
////        ans.pop_back();
////
////    }
////
////
////}
////int main(){
////    scanf("%d",&n);
////    //初试化
////    for(int i = 0;i<n;i++){
////        arr[i] = i+1;
////    }
////
////    rb(0);
////}
//
//
////符合条件的解法
//#include<stdio.h>
//#include<vector>
//using namespace std;
//const int maxn = 10;
//int n = 0;
//int arr[maxn];
//bool pass[maxn]{false};//用来记录哪些已经被访问了
//vector<int> ans;
//
////要考虑的第一个问题，传递哪些参数?
//void rb(int index){//表示的是当前判定的是哪一个岔路口
//    if(index == n){//死胡同
//        for(int i=0;i<n;i++){
//            printf("%d",ans[i]);
//            if(i<n-1)	printf(" ");
//        }
//        printf("\n");
//        return ;
//
//    }
//
//    //岔路口
//    for(int i = 0;i<n;i++){
//        if(pass[i]) continue;
//        ans.push_back(arr[i]);
//        pass[i] = true;
//
//        rb(index+1);
//        pass[i] = false;
//        ans.pop_back();
//    }
//
//
//}
//int main(){
//    scanf("%d",&n);
//    //初试化
//    for(int i = 0;i<n;i++){
//        arr[i] = i+1;
//    }
//
//    rb(0);
//}