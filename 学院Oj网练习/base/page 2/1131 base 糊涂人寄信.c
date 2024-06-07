#include<stdio.h>
int g(int n){
	if(n>2){
		return (n-1)*(g(n-1)+g(n-2));
	}
	else if(n==1){
		return 0;
	}else if(n==2){
		return 1;
	}
}
int main (){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",g(n));
	}
	return 0;
} 
