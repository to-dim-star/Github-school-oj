#include<stdio.h>
int main (){
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(k=n-i;k>0;k--){
				printf("#");
			}printf("\n");
		}printf("\n");
	}
	return 0;
}
