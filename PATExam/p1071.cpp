////结束时间6:14
//#include<iostream>
//#include<vector>
//#include<cctype>
//#include<algorithm>
//#include<map>
//using namespace std;
//map<string,int> m;
//struct node{
//    string name;
//    int num;
//};
//
//vector<node> list;
//bool cmp(node a,node b){
//    if(a.num == b.num) return a.name < b.name;
//    else return a.num > b.num;
//}
//int main(){
//    string str;
//    getline(cin,str);
//    int s = 0,num = 0;
//    for(int i = 0;i<str.size();i++){
//        if(isalpha(str[i])||isdigit(str[i])){
//            str[i] = tolower(str[i]);
//            if(num == 0) s = i;
//            num++;
//        }else{
//            if(num != 0){
//                m[str.substr(s,num)]++;
//                num = 0;
//            }
//        }
//    }
//    //将最后一个加入
//    m[str.substr(s)]++;
//    int maxNum = 0;
//    string maxName = "";
//    for(auto item:m){
//        if(item.second > maxNum){
//            maxNum = item.second;
//            maxName = item.first;
//        }
//    }
//    cout<<maxName<<" "<<maxNum<<endl;
//
//}