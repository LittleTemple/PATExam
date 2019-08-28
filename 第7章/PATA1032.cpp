//首先因为只有五位数数，数字不是特别大，所以想到静态数组
#include <iostream>
#include <map>
using namespace std;
const int maxn = 1e6;
struct list{
    int data;
    int next = -1;
    int flag = -1;//使用flag来标记该点是否在第一个数组中出现过
}node[maxn];

int s1,s2,n;
int addr,nextNode;
char data;


int main(){
    cin>>s1>>s2>>n;

    for (int i = 0; i < n; ++i) {
        cin>>addr;
        getchar();
        cin>>data>>nextNode;
        node[addr].next = nextNode;
        node[addr].data = data;

    }


    while(node[s1].next!=-1){
        node[s1].flag = 1;
        s1 = node[s1].next;

    }

    while(node[s2].next!=-1){
        if(node[s2].flag == 1){
            cout<<s2<<endl;
           return 0;
        }
        s2 = node[s2].next;
    }

    cout<<-1<<endl;
}
