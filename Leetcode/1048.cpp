//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int res = 0;
////其中s1的长度小于s2的长度
//bool isPre(string s1,string s2){
//    int counter = 0;
//    int ind1 = 0;
//    int ind2 = 0;
//    for(int i = 0;i<s2.size();i++){
//        if(counter > 1) return false;
//        if(s1[ind1] == s2[ind2]){
//            ind1++;
//            ind2++;
//        }else{
//            counter++;
//            ind2++;
//        }
//    }
//    return true;
//}
//
//
//
//int longestStrChain(vector<string>& words) {
//    //先创建一个二维数组吧,用来存放长度为i的字符串
//    int n = words.size();
//    vector<vector<string>> dp(n+1);
//    for(int i = 0;i<n;i++){
//        for(int j = 0;j<n;j++){
//            if(i == j) continue;
//            if(isPre(words[i],words[j])) dp[i].push_back(words[j]);
//        }
//    }
//
//    //之后就是通过查找dp数组,找到最长的那个就行
//
//
//
//
//
//}