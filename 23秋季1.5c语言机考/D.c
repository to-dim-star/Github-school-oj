#include<stdio.h>
int main (){
	int i;
	double n=2,m=1,t,sum=0;
	scanf("%d",&i);
	while(i--){
		sum+=n/m;
		t=n;
		n=n+m;
		m=t;
	}printf("%.2f",sum);
	return 0;
}
