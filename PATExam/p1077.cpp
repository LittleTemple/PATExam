////开始时间16:25
////输出最长的公共后缀，非要搞这么多幺蛾子
////suffix -- 后缀
////思路:之后从后往前遍历不就行了???!!!
//#include<iostream>
//#include<string>
//#include <algorithm>
//#include<cstring>
//#include <cmath>
//#include<vector>
//#include <cstdio>
//using namespace std;
//vector<string> list;
//
//int main(){
//    int n,minLen = 1000;
//    cin>>n;
//    getchar();//这里注意，需要用个getchar,接一下
//    for(int i = 0;i<n;i++){
//       string tmp;
//       getline(cin,tmp);//这里需要注意，对string 类型的读取一行
//        minLen = min(minLen,(int)strlen(tmp.c_str()));
//        reverse(tmp.begin(),tmp.end());
//        list.push_back(tmp);
//    }
//
//    int ind = 0,flag = 0;
//    char pre;
//
//    while(ind < minLen){
//        for(int i = 0;i<n;i++){
//            if(i == 0) pre = list[i][ind];
//            if(list[i][ind] != pre){
//                flag = 1;
//                break;
//            };
//        }
//
//
//        if(flag == 1){
//            if(ind == 0){
//                cout<<"nai"<<endl;
//                return 0;
//            }
//            else{
//                string res = list[0].substr(0,ind);
//                reverse(res.begin(),res.end());
//                cout<<res<<endl;
//                return 0 ;
//            }
//        }else{
//            ind++;
//            //没有对最小的串就是结果的情况进行考虑
//
//        }
//    }
//    for(int i = ind-1;i>=0;i--){
//        cout<<list[0][i];
//    }
//    cout<<endl;
//
//    return 0;
//
//
//}
