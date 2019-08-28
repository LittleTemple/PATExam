//#include<cstdio>
//#include<vector>
//using namespace std;
////第一步，找到所有的结果为正数的。
//vector<int> buff;
//vector<int> debuff;
//vector<int> proPos;
//vector<int> proNeg;
//int Nc,Np,tmp;
//long long res;
//bool cmpDown(int a,int b){
//    return a>b;
//}
//int main(){
//    scanf("%d",&Nc);
//    for(int i = 0;i<Nc;i++){
//        scanf("%d",&tmp);
//        if(tmp > 0) buff.push_back(tmp);
//        else if(tmp < 0) debuff.push_back(tmp);
//    }
//    scanf("%d",&Np);
//    for(int i = 0;i<Np;i++){
//        scanf("%d",&tmp);
//        if(tmp > 0) proPos.push_back(tmp);
//        else if(tmp < 0) proNeg.push_back(tmp);
//    }
//    sort(buff.begin(),buff.end(),cmpDown);
//    sort(debuff.begin(),debuff.end());
//    sort(proPos.begin(),proPos.end(),cmpDown);
//    sort(proNeg.begin(),proNeg.end());
//
//    int index = 0;
//    while(index<buff.size()&&index<proPos.size()){
//        res += proPos[index]*buff[index];
//        index++;
//    };
//    index = 0;
//    while(index<debuff.size()&&index<proNeg.size()) {
//        res += debuff[index]*proNeg[index];
//        index++;
//    }
//    printf("%ld",res);
//
//}