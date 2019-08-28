////开始时间15:18
//#include<iostream>
//#include <vector>
//using namespace std;
//int n;
//
//void change(vector<int> a,vector<int> &b){
//    int tmp[55];
//    for(int i = 1;i<=54;i++){
//        tmp[a[i]] = b[i];
//    }
//    for(int i = 1;i<=54;i++){
//        b[i] = tmp[i];
//    }
//}
//
//void show(int num){
//    if(num >=1&&num<=13) cout<<"S"<<num;
//    else if(num>=14&&num<=26) cout<<"H"<<num-13;
//    else if(num>=27&&num<=39) cout<<"C"<<num-26;
//    else if(num>=40&&num<=52) cout<<"D"<<num-39;
//    else cout<<"J"<<num-52;
//}
//int main(){
//    cin>>n;
//    vector<int> a,b;
//    a.resize(55),b.resize(55);
//    for(int i = 1;i<=54;i++){
//        cin>>a[i];
//        b[i] = i;
//    }
//    for(int i = 0;i<n;i++){
//        change(a,b);
//    }
//
//    for(int i = 1;i<=54;i++){
//        show(b[i]);
//        if(i != 54) cout<<" ";
//    }
//    return 0;
//
//}