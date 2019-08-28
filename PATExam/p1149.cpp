//////首先的思路是，很简单，所有的冲突可以使用一个map来进行存储.
//////之后依次输入id，到map中找就可以了
////#include<iostream>
////#include<vector>
////#include <map>
////#include <cstring>
////#include <string>
////using namespace std;
////int n,m;
////map<string,vector<string>> reference;
////int main(){
////    scanf("%d%d",&n,&m);
////    for(int i = 0;i<n;i++){
////        string str1,str2;
////        cin>>str1>>str2;
////        vector<string> tmp = reference.find(str1)->second;
////        tmp.push_back(str2);
////        reference[str1] = tmp;
////    }
////
////    for(int i = 0;i<m;i++){
////        int k = 0;
////        cin>>k;
////        map<string,int> list;
////        for(int j = 0;j<k;j++){
////            string tmp;
////            cin>>tmp;
////            list[tmp]++;
////            vector<string> add = reference.find(tmp)->second;
////            for(auto item:add){
////                list[item]++;
////            }
////        }
////        bool pass = false;
////        for(auto ans:list){
////            if(ans.second>1){
////                printf("%s\n","No");
////                pass = true;
////                break;
////            }
////        }
////        if(!pass){
////            printf("%s\n","Yes");
////        }
////
////    }
////    return 0;
////
////
////}
//
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//int N;
//double A,B;
//
//
////用于将两个数处理成标准模式
//double format(double target,int n,int &up){
//    //第一步,先将两个都处理成0.xxx * 10^k次方的形式
//    double res = 0;
//    if(target == 0){
//        up = n;
//        return  0.0;
//    }
//    while(target >= 1){
//        target /= 10.0;
//        up++;
//    }
//    while(target < 0.1){
//        target *= 10.0;
//        up--;
//    }
//
//    //第二步,将处理后的数按照科学计数法进行规范
//    target = target*pow(10.0,n);
//    res = 1.0*floor(target)/(pow(10.0,n));
//
//    return res;
//}
//
////自己定义的输出函数
//string print(double t,int n){
//    string str ="";
//    int len = 0;
//    while(floor(t) != t){
//        t *= 10;
//        len ++;
//    }
//    if(len< n){
//        for(int i = 0;i<(n-len);i++){
//            str += "0";
//        }
//    }
//    return str;
//
//}
//
//int main(){
//    cin>>N>>A>>B;
//    //先将两个数处理成标准模式
//    int upA = 0;
//    int upB = 0;
//    double resA,resB;
//    string strA,strB;
//    resA = format(A,N,upA);
//    resB = format(B,N,upB);
//    strA = print(resA,N);
//    strB = print(resB,N);
//    if(upA == upB && resA == resB){
//        cout<<"YES "<<resA<<strA<<"*10^"<<upA<<endl;
//    }else{
//        cout<<"NO "<<resA<<strA<<"*10^"<<upA<<" "<<resB<<strB<<"*10^"<<upB<<endl;
//    }
//    return 0;
//
//
//}
//
