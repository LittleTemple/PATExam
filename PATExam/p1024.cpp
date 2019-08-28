//#include<iostream>
//using namespace std;
//struct bign{
//    int d[10000] = {0};
//    int len = 0;
//};
//bign change(string str){
//    bign a;
//    for(int i = str.size()-1;i>=0;i--){
//        a.d[a.len++] = str[i]-'0';
//    }
//    return a;
//}
//
//bign add(bign a,bign b){
//    bign c;
//    int carry = 0;
//    for(int i = 0;i<a.len||i<b.len;i++){
//        int tmp = a.d[i]+b.d[i]+carry;
//        carry = tmp/10;//注意这里容易出错
//        c.d[c.len++] = tmp%10;
//    }
//    if(carry != 0) c.d[c.len++] = carry;
//    return c;
//}
//
//bool check(bign a){
//    for(int i = 0;i<a.len;i++){
//        if(a.d[i] != a.d[a.len-1-i]) return false;
//    }
//    return true;
//}
//
//void show(bign a){
//    for(int i = a.len-1;i>=0;i--) cout<<a.d[i];
//}
//
//bign rev(bign a){
//    reverse(a.d,a.d+a.len);
//    return a;
//}
//string n;
//int k,flag = 0;
//int main(){
//    cin>>n>>k;
//    bign a = change(n);
//    bign b;
//    for(int i = 0;i<k;i++){
//        if(check(a)){
//            show(a);
//            cout<<endl;
//            cout<<i<<endl;
//            flag = 1;
//            break;
//        }
//        b = rev(a);
//        a = add(a,b);
//    }
//    if(flag == 0){
//        show(a);
//        cout<<endl;
//        cout<<k<<endl;
//    }
//    return 0;
//
//
//}