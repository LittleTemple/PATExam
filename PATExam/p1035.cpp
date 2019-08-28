////8.13 15:20
//#include<iostream>
//#include<string>
//#include<vector>
//#include <cstring>
//
//
//using namespace std;
//struct account{
//    string id;
//    string password;
//    bool ischanged = false;//设定开始时没有修改
//};
//
//vector<account> list;
//int N,num = 0;//num表示修改的数量
//
//bool change(string &str){
//    int len = strlen(str.c_str());
////    int tmp = 0;
////    for(int i = 0;i<len;i++){
////        if(str[i] == '1')str[i] = '@';
////        else if(str[i] == '0') str[i] = '%';
////        else if(str[i] == 'l') str[i] = 'L';
////        else if(str[i] == 'O') str[i] = 'o';
////        else tmp++;
////    }
////    return tmp != len;//修改，返回true。没有，返回false
//        int flag = 0;
//        for(int i = 0;i<len;i++){
//            switch (str[i]){
//                case '1':str[i] = '@';flag = 1;break;
//                case '0':str[i] = '%';flag = 1;break;
//                case 'l':str[i] = 'L';flag = 1;break;
//                case 'O':str[i] = 'o';flag = 1;break;
//                default:break;
//            }
//        }
//        return flag == 1;
//}
//
//int main(){
//    cin>>N;
//    for(int i = 0;i<N;i++){
//        string a,p;
//        cin>>a>>p;
//        bool flag = change(p);
//        if(flag) num++;
//        account a1{a,p,flag};
//        list.push_back(a1);
//    }
//    if(num>0){
//        cout<<num<<endl;
//        for(auto item:list){
//            if(item.ischanged)
//                cout<<item.id<<" "<<item.password<<endl;
//        }
//    }else{
//        if(N == 1) cout<<"There is 1 account and no account is modified"<<endl;
//        else cout<<"There are "<<N<<" accounts and no account is modified"<<endl;
//    }
//    return 0;
//}
