//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int mod = 1e9+7;
//const int P = 1e7+19;
//vector<int> ans;
////字符串hash
//long long hashFunc(string str){
//    long long H = 0;
//    for (int i = 0; i < str.length(); ++i) {
//        H = (H * P +str[i]-'a') % mod;
//    }
//    return H;
//}
////其中还要考虑子串的hash值的情况
////字符串hash进阶
//int main() {
//    string str;
//    while(getline(cin,str),str!="#"){
//        long long id = hashFunc(str);
//        ans.push_back(id);
//    }
//
//    sort(ans.begin(),ans.end());
//    int count = 0;
//    for(int i = 0;i<ans.size();i++){
//        if(i == 0||ans[i] != ans[i-1]){
//            count++;
//        }
//    }
//    cout<<count<<endl;
//    return 0;
//
//
//
//}