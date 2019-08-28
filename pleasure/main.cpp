//#include<stdio.h>
//using namespace std;
//int dxChoose[]={0,0,-1,1};
//int dyChoose[]={1,-1,0,0};
//
//int dxNChoose[]={-1,-1,1,1};
//int dyNChoose[]={-1,1,1,-1};
//
//int n = 0;
//long long ans = 0;
//const int maxn = 19;
//bool pass[maxn][maxn]{false};
//bool judge(int x,int y){
//	if(x<0||x>=n||y<0||y>=n) return false;
//	else if(pass[x][y]) return false;
//	return true;
//
//}
//
//void rback(int nowX,int nowY,int num,int endN){//其中num是教室中的人数
//	if(num == endN){
//		ans++;
//		return;
//	}
//	//如果选择走
//	pass[nowX][nowY] = true;
//	printf("%d-%d\n",nowX,nowY);
//	for(int i = 0;i<4;i++){
//		int newX = nowX+dxChoose[i];
//		int newY = nowY+dyChoose[i];
//
//		if(judge(newX,newY)){
//			rback(newX,newY,num+1,endN);
//		}
//	}
//
//	//如果选择不走
//	pass[nowX][nowY] = false;
//	for(int i = 0;i<4;i++){
//		int newX = nowX+dxNChoose[i];
//		int newY = nowY+dyNChoose[i];
//		if(judge(newX,newY)){
//			rback(newX,newY,num,endN);
//		}
//	}
//
//}
//int main(){
//	scanf("%d",&n);
//	for(int i = 0;i<maxn;i++){
//		for(int j = 0;j<maxn;j++){
//			pass[i][j] = false;
//		}
//	}
//	int max = 0;
//	if(n%2==0){
//		max = n*n/2;
//	}else {
//		max = (n-1)*(n-1)/2+n;
//	}
//	for(int i = 1;i<=max;i++){
//		rback(0,0,0,i);
//	}
//	printf("%lld",ans);
//	return 0;
//}