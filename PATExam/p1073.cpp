//////2:30开始,理清思路半个小时过去了
//////首先将两个数分出来，E之前的系数,E之后的指数
//////之后分为三种情况判断.
//////如果指数exp>0,那么就进行exp次循环，将.与.后面那位数交换。如果后面还有数，就一直换。如果。是最后一个数，就在最后添一个0。继续交换，直到循环结束为止
//////如果指数exp<0,那么就是进行-exp次循环，同理。不断与.之前的一个数交换，直到循环结束
//////如果exp == 0,之后输出即可。
//////最后如果exp>0,需要判断是否添0，如果添0，则输出到.之前的所有数。
////
//////还有更优秀的解法
////
////#include<iostream>
////#include<string>
////using namespace std;
//////感觉很麻烦
////int main(){
////    string s;
////    cin>>s;
////    int exp = stoi(s.substr(s.find('E')+1));//找到指数
////    string num = s.substr(1,s.find('E')-1);//找到系数
////
////
////    //正数进入
////    int flag = 1;
////    for(int i = 0;i<exp;i++){
////        if(flag==num.size()-1){
////            num += "0";
////        }
////        swap(num[flag],num[flag+1]);
////        flag++;
////    }
////
////    //负数进入
////    flag = 1;
////    exp = -exp;
////    for(int i = 0;i<exp;i++){
////        if(flag == 0){
////            num = "0"+num;
////            flag = 1;
////        }
////        swap(num[flag],num[flag-1]);
////        flag--;
////    }
////    exp = -exp;//回归
////
////
////
////    if(s[0] == '-') cout<<s[0];
////    for(int i = 0;i<num.size( );i++){
////        if(exp < 0) {
////            if(i == 0) cout<<"0";
////            cout << num[i];
////        }else if(exp > 0){//没有考虑到会有没有补位的情况
////            if(i == num.size()-1&&num[i] == '.') continue;
////            cout<<num[i];
////        }else{
////            cout<<num[i];
////        }
////    }
////    return 0;
////
////
////
////}
////
//
//#include <iostream>
//using namespace std;
//int main() {
//    string s;
//    cin >> s;
//
//    int exp = stoi(s.substr(s.find('E')+1));//找到指数
//    string num = s.substr(1,s.find('E')-1);//找到系数
//
//    if (s[0] == '-') cout << "-";
//    if (exp < 0) {
//        cout << "0.";
//        for (int j = 0; j < abs(exp) - 1; j++) cout << '0';//输出指数-1个0
//        for (int j = 0; j < num.size(); j++) //输出除.以外的数据
//            if (num[j] != '.') cout << num[j];
//    } else {
//        cout << num[0];
//        int cnt, j;
//        for (j = 2, cnt = 0; j < num.size() && cnt < exp; j++, cnt++) cout << num[j];
//        if (j == num.size()) {//如果是位数不够，就补exp-cnt个0
//            for (int k = 0; k < exp - cnt; k++) cout << '0';
//        } else {
//            cout << '.';//否则就继续输出
//            for (int k = j; k < num.size(); k++) cout << num[k];
//        }
//    }
//    return 0;
//}
