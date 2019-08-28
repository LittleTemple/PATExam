////结束时间18:15
////开始时间19:17
////结束时间19:40
//#include<iostream>
//#include<vector>
//#include<map>
//#include <algorithm>
//using namespace std;
//map<string,vector<string>> titleToId;
//map<string,vector<string>> authorToId;
//map<string,vector<string>> keyToId;
//map<string,vector<string>> publisherToId;
//map<string,vector<string>> yearToId;
//
//void show(vector<string> list){
//    sort(list.begin(),list.end());
//    for(auto item:list) cout<<item<<endl;
//    if(list.empty()) cout<<"Not Found"<<endl;
//}
//
//int main(){
//    int n,m;
//    string id,title,author,keys,publisher,year,q;
//    cin>>n;
//    getchar();
//    for(int i = 0;i<n;i++){
//        getline(cin,id);
//        getline(cin,title);
//        getline(cin,author);
//        getline(cin,keys);
//        getline(cin,publisher);
//        getline(cin,year);
//
//        //对数据进行初步的处理
//        titleToId[title].push_back(id);
//        authorToId[author].push_back(id);
//        publisherToId[publisher].push_back(id);
//        yearToId[year].push_back(id);
//
//        //对关键词进行特殊处理
//        int s = 0,num = 0;
//        for(int j = 0;j<keys.size();j++){//这里容易写成i
//            if(keys[j] == ' '){
//                string key = keys.substr(s,num);
//                keyToId[key].push_back(id);
//                num = 0;
//                s = j+1;
//            }else{
//                num++;
//            }
//        }
//        //将最后一个加入
//        keyToId[keys.substr(s)].push_back(id);
//    }
//    cin>>m;
//    getchar();
//    for(int i = 0;i<m;i++){
//        getline(cin,q);
//        int qnum = q[0]-'0';
//        string query = q.substr(q.find(": ")+2);
//        cout<<q<<endl;
//        switch(qnum){
//            case 1:{
//                vector<string> tmp = titleToId[query];
//                show(tmp);
//                break;
//            }case 2:{
//                vector<string> tmp = authorToId[query];
//                show(tmp);
//                break;
//            }case 3:{
//                vector<string> tmp = keyToId[query];
//                show(tmp);
//                break;
//            }case 4:{
//                vector<string> tmp = publisherToId[query];
//                show(tmp);
//                break;
//            }case 5:{
//                vector<string> tmp = yearToId[query];
//                show(tmp);
//                break;
//            }
//        }
//    }
//
//    return 0;
//
//
//}