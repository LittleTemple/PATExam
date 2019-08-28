//大数运算
#include<iostream>
using namespace std;
struct bign{
    int d[1000] = {0};
    int len = 0;
    bool isMinus = false;
};
bign create(string str){
    bign c;
    for(int i = str.size()-1;i>=0;i--){
        if(i == 0&&str[i] == '-'){
            c.isMinus = true;
            break;
        }
        c.d[c.len++] = str[i]-'0';
    }
    return c;
}
bign add(bign a,bign b){
    bign c;
    int carry = 0;
    for(int i = 0;i<a.len||i<b.len;i++){
        int tmp = a.d[i]+b.d[i]+carry;
        carry = tmp/10;
        c.d[c.len++] = tmp%10;
    }
    if(carry != 0) c.d[c.len++] = carry;
    return c;
}

bign del(bign a,bign b){//必须要保证a>b
    bign c;
    int carry = 0;
    for(int i = 0;i<a.len||i<b.len;i++){
        if(a.d[i] < b.d[i]){
            a.d[i+1]--;
            a.d[i]  += 10;
        }
        c.d[i] = a.d[i]-b.d[i];
    }
    while(c.d[c.len] == 0&&c.len > 1){
        c.len--;
    }
    return c;
}

bool cmp(bign a,bign b){//a>b
    if(a.len > b.len) return true;
    else{
        for(int i = a.len-1;i>=0;i--){
            if(a.d[i] > b.d[i]) return true;
        }
        return false;
    }
}
int n;
string s1,s2,s3;
bign a,b,c,l,r;
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>s1>>s2>>s3;
        a = create(s1);
        b = create(s2);
        c = create(s3);
        if(a.isMinus) r = add(a,r);
        else l = add(a,l);
        if(b.isMinus) r = add(b,r);
        else l = add(b,l);
        if(c.isMinus) l = add(c,l);
        else r = add(c,r);

        for(int j = 0;j<a.len;j++) cout<<a.d[j];
        cout<<endl;

        for(int j = 0;j<b.len;j++) cout<<b.d[j];
        cout<<endl;

        for(int j = 0;j<c.len;j++) cout<<c.d[j];


        cout<<"Case #"<<i<<": "<<(cmp(l,r)?"true":"false");
        cout<<endl;
    }


}