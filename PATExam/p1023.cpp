//////解决一个万恶之源,int 与string之间的相互转化
////#include <iostream>
////#include <cstdlib>
////#include <cstring>
////#include <sstream>
////using namespace std;
////int main(){
////    string a = "12345678900";//最多10位
////    long long b = atoi(a.c_str());
////    cout<<b<<endl;
////
////    unsigned long long res;
////    string str="1234567890123456789";//最多19位,使用unsign最多20位.long long 的限制
////    istringstream is(str);
////    is >> res;
////    cout<<res<<endl;
////
////    //long 转string
////    long l = 1234567890123456789;
////    ostringstream os;
////    os << l;//将long放到输出流中
////    string result;
////    istringstream in(os.str());
////    in >> result;
////    cout<<result;
////
////
////
////
////}
////
//
//#include <cstdio>
//#include <cstring>
//
//int m[10];
//
//
////因为位数过高，所以不能直接使用int类型来存储
////需要使用字符串乘法
//int main(){
//    char num[22];
//    scanf("%s",num);//这里不需要&
//    int flag = 0,len = strlen(num);
//    for(int i = len-1;i>=0;i--){
//        int temp = num[i]-'0';
//        m[temp]++;
//        temp = temp*2+flag;
//        flag = 0;
//        if(temp >= 10){
//            temp = temp -10;
//            flag = 1;
//        }
//        num[i] = temp+'0';
//        m[temp]--;
//    }
//    int isYes = 0;
//    for (int j = 0; j < 10; ++j) {
//        if(m[j] != 0) isYes = 1;
//    }
//    printf("%s",(flag == 1 || isYes == 1)?"No\n":"Yes\n");
//    if(flag == 1) printf("1");
//    printf("%s",num);
//}