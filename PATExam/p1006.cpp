////这个比较简单啊
//#include<iostream>
//#include<cstring>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//struct Record{
//    string studId;
//    string signInTime;
//    string signOutTime;
//};
//int m;
//vector<Record> records;
//
//
//vector<int> format(string str){
//    int start = 0;
//    vector<int> res;
//    string subStr;
//    for(int i = 0;i<str.size();i++){
//
//        if(str[i] == ':'||i == str.size()-1){
//            subStr = str.substr(start,2);//str.substr()第二个参数是个数，截取几个
//            start = i+1;
//            res.push_back((subStr[0]-'0')*10+subStr[1]-'0');
//        }
//
//    }
//    return res;
//}
//
////这里考察了一个string切割字符串的问题啊
//bool cmpIn(Record a,Record b){
//    vector<int> timeA = format(a.signInTime);
//    vector<int> timeB = format(b.signInTime);
//
//    if(timeA[0] == timeB[0]){
//        if(timeA[1] == timeB[1])
//            return timeA[2] < timeB[2];//cmp的用法又忘记了
//        else
//            return timeA[1] < timeB[1];
//    }else return timeA[0] < timeB[0];
//}
//
//bool cmpOut(Record a,Record b){
//    vector<int> timeA = format(a.signOutTime);
//    vector<int> timeB = format(b.signOutTime);
//
//    if(timeA[0] == timeB[0]){
//        if(timeA[1] == timeB[1])
//            return timeA[2] < timeB[2];//cmp的用法又忘记了
//        else
//            return timeA[1] < timeB[1];
//    }else return timeA[0] < timeB[0];
//}
//
//
//
//
//int main(){
//    cin>>m;
//    for(int i = 0;i<m;i++){
//        string id,signIn,signOut;
//        Record r;
//        cin>>id>>signIn>>signOut;
//        r.studId = id;
//        r.signInTime = signIn;
//        r.signOutTime = signOut;
//        records.push_back(r);
//    }
//    sort(records.begin(),records.end(),cmpIn);
//    cout<<records[0].studId<<" ";
//    sort(records.begin(),records.end(),cmpOut);
//    cout<<records[records.size()-1].studId;
//
//
//}

/*
 * 我太天真了，居然认为自己的解法是最优解!!
 */

//#include <iostream>
//
//using namespace std;
//int main() {
//    int n, minn = INT_MAX, maxn = INT_MIN;
//    scanf("%d", &n);
//    string unlocked, locked;
//    for(int i = 0; i < n; i++) {
//        string t;
//        cin >> t;
//        int h1, m1, s1, h2, m2, s2;
//        scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
//        int tempIn = h1 * 3600 + m1 * 60 + s1;
//        int tempOut = h2 * 3600 + m2 * 60 + s2;
//        if (tempIn < minn) {
//            minn = tempIn;
//            unlocked = t;
//        }
//        if (tempOut > maxn) {
//            maxn = tempOut;
//            locked = t;
//        }
//    }
//    cout << unlocked << " " << locked;
//    return 0;
//
//}