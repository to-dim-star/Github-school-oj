#include<stdio.h>
int main (){
	int a,sum=0;
	while(scanf("%d",&a)!=EOF){
		sum=a+sum;
	}
	printf("%d",sum);
	
	return 0;
} 
