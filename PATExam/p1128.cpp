////这个比较简单吧！
////只需要创建一个二维数组，之后对二维数组进行赋值
////遍历二维数组，判断每个值是否满足条件就好了
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int k = 0,n = 0;
//int main(){
//    while(scanf("%d",&k)!=EOF){
//        for(int i = 0;i<k;i++){
//            scanf("%d",&n);
//            int *p = new int[n];
//            bool res = true;
//            for(int j = 0;j<n;j++){
//                scanf("%d",&p[j]);
//            }
//            for(int j = 0;j<n;j++){
//                for(int k = j+1;k<n;k++){
//                    if(abs(k-j)==(p[k]-p[j])){
//                        res = false;
//                        break;
//                    }
//                }
//            }
//
//            if(res){
//                printf("%s\n","YES");
//            }else{
//                printf("%s\n","NO");
//            }
//        }
//    }
//    return 0;
//
//}