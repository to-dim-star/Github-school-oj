#include<stdio.h>
int main (){
	char cj;
	while(scanf("%c",&cj)!=EOF){
		if(cj=='A'){
			printf("90~100\n");
		}
		else if(cj=='B'){
			printf("80~89\n");
		}
		else if(cj=='C'){
			printf("70~79\n");
		}
		else if(cj=='D'){
			printf("60~69\n");
		}
		else if(cj=='E'){
			printf("0~59\n");
		}
		else if(cj!='\n'){
			printf("error\n");
		}
	}
	return 0;
}
