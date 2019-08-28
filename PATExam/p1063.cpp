//#include<cstdio>
//#include<set>
//using namespace std;
//const int maxn = 60;
//set<int> s[maxn];
//
//int main(){
//    int n,m,k,tmp,q1,q2;
//    scanf("%d",&n);
//    for(int i = 1;i<=n;i++){
//        scanf("%d",&m);
//        for(int j = 0;j<m;j++){
//            scanf("%d",&tmp);
//            s[i].insert(tmp);
//        }
//    }
//
//
//    //开始输出
//    scanf("%d",&k);
//    for(int i = 0;i<k;i++){
//        scanf("%d%d",&q1,&q2);
//        set<int> s2 = s[q1];
//        s2.insert(s[q2].begin(),s[q2].end());
//        printf("%.1f%c\n",100.0*(s[q1].size()+s[q2].size()-s2.size())/s2.size(),'%');
//
//    }
//}