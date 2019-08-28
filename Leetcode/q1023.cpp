//#include <iostream>
//#include <vector>
//#include <string>
//#include <cstring>
//using namespace std;
//
//void solveStr(vector<char> &upper, vector<string> &lower, string str) {
//    string tmp = "";
//    for (char c:str) {
//        if (c >= 'A' && c <= 'Z') {
//            upper.push_back(c);
//            lower.push_back(tmp);
//            tmp = "";
//        } else {
//            tmp += c;
//        }
//    }
//}
//
//void camelMatch(vector<string> &queries, string pattern) {
//    vector<bool> res;
//    vector<char> upperP;
//    vector<string> lowerP;
//    //事先处理pattern的串
//    solveStr(upperP, lowerP, pattern);
//    //首先标记所有的大写字母的位置
//    //KMP算法的使用
//    for (string str:queries) {
//        vector<char> upper;
//        vector<string> lower;
//        solveStr(upper, lower, str);
//
//
//        bool tmpRes = false;
//        if (upperP.size() != upper.size()) {//如果两者的大小不相等，直接返回
//            res.push_back(false);
//            continue;
//        } else {
//            int flag = 1;
//            while (flag < lower.size() && flag < lowerP.size()) {
//                if (lower[flag].find(lowerP[flag]) != string::npos) {//也就是主串中包含这模式串的所有字符
//                    flag++;
//                    tmpRes = true;
//                } else {
//                    tmpRes = false;
//                    break;
//                }
//            }
//            if (flag == lower.size())
//                if (flag != lowerP.size())
//                    tmpRes = false;//最后对结尾的字符串进行判断
//            res.push_back(tmpRes);
//        }
//
//    }
//}
//
//int main(){
//    vector<string> queries = {"FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"};
//    string pattern ="FB";
//    camelMatch(queries,pattern);
//}