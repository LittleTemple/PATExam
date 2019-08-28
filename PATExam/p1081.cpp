////分数运算
////开始时间14:42
//#include<iostream>
//#include<vector>
//using namespace std;
//struct frac{
//    long int up,down;
//};
//vector<frac> list;
////辗转相除法
//long int gcd(long int a,long int b){
//    if(b == 0) return a;
//    return gcd(b,a%b);
//}
//
////分数的化简
//frac reduce(frac res){
//    if(res.down<0){
//        res.up = -res.up;
//        res.down = - res.down;
//    }
//    if(res.up == 0){
//        res.down = 1;
//    }else{
//        long int d = gcd(abs(res.up),abs(res.down));
//        res.up /= d;
//        res.down /= d;
//    }
//    return res;
//}
//
////两个分数相加
//frac add(frac a,frac b){
//    frac c;
//    c.down = a.down*b.down;
//    c.up = a.down*b.up+a.up*b.down;
//    return reduce(c);
//}
//
//int main(){
//    int n;
//    string str;
//    frac s;
//    s.up = 0;
//    s.down = 1;
//    cin>>n;
//    list.resize(n);
//    getchar();
//    for(int i = 0;i<n;i++){
//        cin>>str;
//        list[i].up = stoi(str.substr(0,str.find('/')));
//        list[i].down = stoi(str.substr(str.find('/')+1));
//        s = add(list[i],s);
//    }
//
//
//    if(s.up%s.down == 0) {
//        cout<<s.up/s.down<<endl;
//    }else if(s.up < s.down){
//        cout<<s.up<<"/"<<s.down<<endl;
//    }else{
//        cout<<s.up/s.down<<" "<<s.up%s.down<<"/"<<s.down<<endl;
//    }
//    return 0;
//
//}
