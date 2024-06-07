#include<stdio.h>
int main (){
	int y,x;
	while(scanf("%d",&x)!=EOF){
		if(x<1){
			y=x;
		}else if(x>=1 && x<10){
			y=2*x-1;
		}else{
			y=10;
		}printf("y = %d\n",y);	
	}
	return 0;
} 
