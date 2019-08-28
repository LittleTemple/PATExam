//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<set>
//using namespace std;
//int n = 0,tmp = 0;
//vector<int> arr;
//int main(){
//    arr.push_back(0);
//    scanf("%d",&n);
//    for(int i = 0;i<n;i++){
//        scanf("%d",&tmp);
//        if(tmp<=0){
//            continue;
//        }else{
//            arr.push_back(tmp);
//        }
//    }
//
//    sort(arr.begin(),arr.end());
//    //arr中存放的是从小到大所有的正整数
//    //要找出第一个没有出现的正整数
//    //arr中应该存放的顺序是：arr[1]放1，arr[2]放2...
//    //有个前提是，不能有相等的数.
//    //所以应该跳过所有的重复的数字
//    int num = 1;
//    for(int i = 1;i<=arr.size();i++){
//        while(arr[i] == arr[i-1]){
//            i++;
//        }
//        if(arr[i] == num){
//            num++;
//        }else{
//            printf("%d",num);
//            break;
//        }
//    }
//
//    return 0;
//
//}