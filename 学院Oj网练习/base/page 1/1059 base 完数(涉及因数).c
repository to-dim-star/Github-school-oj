#include<stdio.h>
int main (){
	int i,j,sum;
	int a[114]={0},cot;
	for(i=4;i<=1000;i++){
		sum=0;cot=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				sum+=j;
				a[cot++]=j;
			}
		}if(sum+1==i){
			printf("%d its factor are 1",i);
			for(j=0;j<cot;j++){
				printf(",%d",a[j]);
			}printf("\n");
		}
	} 
	return 0;
}
