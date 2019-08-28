//////符合条件的解法
//#include<stdio.h>
//#include<vector>
//using namespace std;
//const int maxn = 10;
//int n = 0,r = 0;
//int arr[maxn];
//bool pass[maxn]{false};//用来记录哪些已经被访问了
//vector<int> ans;
//
////要考虑的第一个问题，传递哪些参数?
//void rb(int start,int count){//表示的是当前判定的是哪一个岔路口
//   if(count == r){
//       for(int i=0;i<n;i++){
//            printf("%d",ans[i]);
//            if(i<n-1)	printf(" ");
//        }
//        printf("\n");
//       return;
//   }else if(start == n-r+1){
//
//   }
//
//   for(int i = start;i<n;i++){
//       if(pass[i]) continue;
//
//       ans.push_back(arr[i]);
//       pass[i] = true;
//       rb(start,count+1);
//
//
//   }
//
//}
//int main(){
//    scanf("%d%d",&n,&r);
//    //初试化
//    for(int i = 0;i<n;i++){
//        arr[i] = i+1;
//    }
//
//}
