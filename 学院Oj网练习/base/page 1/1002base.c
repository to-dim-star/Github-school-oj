#include<stdio.h>
int main (){
	int N,sum=0;
	scanf("%d",&N);
	for(;N>0;N--){
		sum+=N;
	}
	printf("%d",sum);
	return 0;
}
