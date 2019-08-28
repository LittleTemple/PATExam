//#include<string>
//#include<iostream>
//#include<vector>
//#include <map>
//#include<algorithm>
//using namespace std;
//int n,k;
//map<string,vector<int>> list;
//int main(){
//    cin>>n>>k;
//    for(int i = 0;i<k;i++){
//        int ci,si = 0;
//        cin>>ci>>si;
//        for(int j = 0;j<si;j++){
//            string name;
//            cin>>name;
//            if(list[name].empty()){
//                vector<int> tmp;
//                tmp.push_back(ci);
//                list[name] = tmp;
//            }else{
//                list[name].push_back(ci);
//            }
//        }
//    }
//    for(map<string,vector<int>>::iterator it = list.begin();it!=list.end();it++){
//        sort(it->second.begin(),it->second.end());
//    }
//
//    for(int i = 0;i<n;i++){
//        string str;
//        cin>>str;
//        cout<<str<<" ";
//        cout<<list[str].size()<<" ";
//        for(auto num:list[str]){
//            cout<<num<<" ";
//        }
//        cout<<endl;
//    }
//}
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const  int maxn = 210;
int main(){
    char c = ' ';
    char str[maxn];
    int count = 0;
    while((c = getchar())!='\n'){
        str[count] = c;
        count++;
    }
    str[count] ='\0';

    int start = 0,end = count;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    for(char tmp:str){
        printf("%c",tmp);
    }
}