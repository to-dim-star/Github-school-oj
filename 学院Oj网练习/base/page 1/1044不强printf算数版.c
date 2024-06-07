#include<stdio.h>

int main (){
	int i,j,k;
	int cot=0;
	for(i=5;i>0;i--){
		printf("     ");
		for(j=i;j>1;j--){
			printf("   ");
		}
		for(k=i-(4-cot*3);k>0;k--){
			printf(" * ");
			
		}
		cot+=1;
		if(i!=1){
			printf("\n");
		}
	}
	
	
	
    return 0;
}
