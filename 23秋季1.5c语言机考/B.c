#include<stdio.h>
int main (){
	int a;
	double sum=0;
	while(scanf("%d",&a)!=EOF){
		if(a<0){
			printf("Invalid Value!\n");
			return 0;
		}
		if(a>50){
			sum=(a-50)*0.58+(5*5.3);
		}else{
			sum=a*0.53;
		}
		printf("应支付电费%.2f元\n",sum);
	}
	return 0;
} 
