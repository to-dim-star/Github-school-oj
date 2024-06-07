#include<stdio.h>

int main (){
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
        if(n==0){
			break;
			}
		for(i=1;i<=n;i++){
			for(j=0;j<i;j++){
            	printf("*");//==nnd原来是手机屏太小没看清没有空格 
			
            }printf("\n");
        }printf("\n");
	}
				
	return 0;
} 
