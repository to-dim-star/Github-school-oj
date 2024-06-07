#include<stdio.h>
//==最小公倍数=(a*b)/(gcd(a,b)); 用公式做题就是快 
int gcd (int n,int m){//最大公约数 
	int t;
	while(n%m!=0){
		t=m;
		m=n%m;
		n=t;
	}return m;
}
int gbs(int n,int m){
	int i=1,j=1;
	while(n*i!=m*j){
		if(n*i>m*j)j++;
		else i++;
	}return n*i;
} 
int main (){
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		printf("%d\n",gbs(n,m));
	}
	return 0;
}
