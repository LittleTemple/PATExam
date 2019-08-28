////开始时间15:37
//#include<iostream>
//using namespace std;
////需要定义输出
////得自己想啊
//
//struct frac{
//    long int up,down;
//    bool isInf = false;//判定是否为inf
//};
//long int gcd(long int a,long int b){
//    if(b == 0) return a;
//    else return gcd(b,a%b);
//}
////化简
//frac reduration(frac a){
//    if(a.down < 0){
//        a.up = -a.up;
//        a.down = - a.down;
//    }
//    if(a.up == 0){
//        a.down = 1;
//    }else{
//        long int d = gcd(abs(a.up),abs(a.down));
//        a.up /= d;
//        a.down /= d;
//    }
//    return a;
//}
//frac add(frac a,frac b){
//    frac c;
//    c.down = a.down*b.down;
//    c.up = a.up*b.down+a.down*b.up;
//    return reduration(c);
//}
//
//frac reduce(frac a,frac b){//a-b
//    frac c;
//    c.down = a.down*b.down;
//    c.up = a.up*b.down-a.down*b.up;
//    return reduration(c);
//}
//
//frac multi(frac a,frac b){
//    frac c;
//    c.up = a.up*b.up;
//    c.down = a.down*b.down;
//    return reduration(c);
//}
//
//frac div(frac a,frac b){//a/b
//    frac c;
//    if(b.up == 0){
//        c.up = 0;
//        c.down = 1;
//        c.isInf = true;
//    }else{
//        c.up = a.up*b.down;;
//        c.down = a.down*b.up;
//        c.isInf = false;
//    }
//    return reduration(c);
//}
//
//void show(frac a){
//    a = reduration(a);
//    if(a.isInf){
//        cout<<"Inf";
//        return;
//    }
//    if(a.up < 0) cout<<"(";
//    if(abs(a.up) % a.down == 0){          //需要注意正负号
//        cout<<a.up/a.down;
//    }else if(abs(a.up) > a.down){
//        cout<<a.up/a.down<<" "<<abs(a.up)%a.down<<"/"<<a.down;//整数输出负数之后分数部分就不用输出负数
//    }else if(abs(a.up) < a.down){
//        cout<<a.up<<"/"<<a.down;
//    }
//    if(a.up < 0) cout<<")";
//}
//
////1==+,2==-,3==*,4==/
//void showAll(int choice,frac a,frac b){
//    frac tmp;
//    tmp.up = 0,tmp.down = 1;
//
//    show(a);
//    switch(choice){
//        case 1:{
//            tmp = add(a,b);
//            cout<<" + ";
//            break;
//        }case 2:{
//            tmp = reduce(a,b);
//            cout<<" - ";
//            break;
//        }case 3:{
//            tmp = multi(a,b);
//            cout<<" * ";
//            break;
//        }case 4:{
//            tmp = div(a,b);
//            cout<<" / ";
//            break;
//        }
//    }
//    show(b);
//    cout<<" = ";
//    show(tmp);
//    cout<<endl;
//}
//
//
//int main(){
//    string s1,s2;
//    frac a,b;
//    cin>>s1>>s2;
//    a.up = stoi(s1.substr(0,s1.find('/')));
//    a.down = stoi(s1.substr(s1.find('/')+1));
//    b.up = stoi(s2.substr(0,s2.find('/')));
//    b.down = stoi(s2.substr(s2.find('/')+1));
//    showAll(1,a,b);
//    showAll(2,a,b);
//    showAll(3,a,b);
//    showAll(4,a,b);
//    return 0;
//
//}