#include<stdio.h>
int main (){
	int n;
	double sum,a=1.0,i;
	while(scanf("%d",&n)!=EOF){
		sum=0;a=1.0;
		for(i=1;i<=n;i++){
			sum=a/i+sum;
			a=-a;
		}
		printf("%.2f\n",sum);
	} 
	
	
	
	
	
	return 0;
} 
