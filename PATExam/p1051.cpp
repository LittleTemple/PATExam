////开始时间16:02
//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
////模拟一下
//int m,n,k;//m是最大容积,n是序列长度,k是检查的个数
//vector<int> list;
//int main(){
//    cin>>m>>n>>k;
//    list.resize(n+1);
//    for(int i = 0;i<k;i++){
//        stack<int> s;
//        int ind = 1,flag = 0;//0表示正常弹出
//        for(int j = 1;j<=n;j++) cin>>list[j];
//
//        for(int j = 1;j<=n;j++){
//            if(s.empty()){
//                s.push(ind);
//                ind++;
//            }
//
//            while(s.top() < list[j]){
//                s.push(ind);
//                ind++;
//            }
//
//            if(s.top() > list[j] || s.size() > m){
//                flag = 1;
//                break;
//            }else{
//                s.pop();
//            }
//        }
//        if(flag == 1) cout<<"NO"<<endl;
//        else cout<<"YES"<<endl;
//    }
//    return 0;
//}