#include<iostream>
#include <vector>
using namespace std;
typedef  long long ll;
const  ll mod = 1e9+7;
const  ll p = 1e7+19;
const  ll maxn = 1010;

//因为要求不同的p,所以定一个powP数组,表示p^i次方
ll powp[maxn] = {0},h1[maxn] = {0},h2[maxn] = {0};
vector<pair<int,int>> pr1,pr2;
void init(int len){
    //首先通过长度进行初始化
    for(int i = 0;i<len;i++){
        powp[i] = (powp[i-1]*p)%mod;
    }
}

//计算一个字符串的hash值
void calH(ll H[],string &str){
    H[0]  = str[0];
    for (int i = 1; i < str.size(); ++i) {
        H[i] = (H[i-1]*p+str[i])%mod;
    }
}

//计算一个字符串i,j之间的hash值,j>=i
int calIJ(ll H[],int i,int j){
    if(i == 0) return H[j];
    else return ((H[j]-H[i-1]*powp[j-i+1])%mod+mod)%mod;
}

//计算每一个串的hash值
void calSubH(ll H[],int len,vector<pair<int,int>>&pr){
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {//包括子串本身
            int hashValue = calIJ(H,i,j);
            pr.push_back(pair<int,int>(hashValue,j-i+1));
        }
    }
}


int main(){
    //1。使用hash表的方式
    string s1,s2;
    cin>>s1>>s2;
    init(max(s1.size(),s2.size()));
    calH(h1,s1);
    calH(h2,s2);

}