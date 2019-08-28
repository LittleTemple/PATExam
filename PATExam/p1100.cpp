////开始时间15:04
//#include<iostream>
//#include<cctype>
//using namespace std;
//string low[] = {"tret","jan","feb","mar","apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//string high[] = {"----","tam","hel","maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
//int n;
//string str;
//int main(){
//    cin>>n;
//    getchar();
//    for(int i = 0;i<n;i++){
//        getline(cin,str);
//        if(isdigit(str[0])){//当前输入的是地球语
//            int num = stoi(str);
//            if(num/13) cout<<high[num/13];
//            if((num/13)&&(num%13)) cout<<" ";
//            if(num%13||num == 0) cout<<low[num%13];
//            cout<<endl;
//        }else{
//            int sum = 0;
//            string s1 = str.substr(0,3),s2;
//            if(str.size() > 3) s2 = str.substr(4,3);
//            for(int j = 1;j<=12;j++){
//                if(s1 == low[j] || s2 == low[j]) sum+=j;
//                if(s1 == high[j]) sum+=13*j;
//            }
//            cout<<sum<<endl;
//        }
//    }
//    return 0;
//
//}