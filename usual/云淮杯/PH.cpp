//#include <iostream>
//#include <map>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//int main(){
//    int T;
//    cin>>T;
//    for(int i = 0;i<T;i++){
//        //输入字符串
//        string str;
//        cin>>str;
//
//        map<char,int> chars;
//        int len = 0;//表示子串的长度
//        int counter = 0;//表示所有字符的种类
//        int res = str.size();//这里容易将初值设为0
//        //开始遍历每一个字符
//        for(int j = 0;j<str.size()-26;j++){
//            for(int k = j;k<str.size();k++){
//                char c = str[k];//当前字符
//                len++;
//                if(chars[c] == 0){
//                    counter++;
//                    chars[c]++;
//                }
//                if(counter == 26){//得到值，清空数值
//                    res = min(len,res);
//                    chars.clear();
//                    counter = 0;
//                    len = 0;
//                    break;
//                }
//
//            }
//        }
//
//
//        cout<<res<<endl;
//
//    }
//
//}
