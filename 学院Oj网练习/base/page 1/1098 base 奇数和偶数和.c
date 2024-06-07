#include<stdio.h>
int main (){
	int i,n,sum1,sum2;
	scanf("%d",&n);
	sum1=0;sum2=0;
	for(i=1;i<=n;i+=2){
		sum1+=i;
	}
	for(i=2;i<=n;i+=2){
		sum2+=i;
	}
	printf("odd=%d,even=%d",sum1,sum2);	
	return 0;
}
