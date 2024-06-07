#include<stdio.h>
#include<stdlib.h>
int compare (const void *a,const void *b){
	return (*(int*)b)-(*(int*)a);//嘿嘿,懂辽
	//因为void*传进来的,所以本是啥类型就(int*)啥,然后外面在*以提出来值比较; 
}
int main (){
	int n[9],cot=-1;
	while(scanf("%d",&n[++cot])!=EOF){
		if(cot==8){
			cot=-1;
			qsort(n,9,sizeof(int),compare);
			printf("%d %d %d\n",n[1],n[5],n[2]);
			printf("%d %d %d\n",n[8],n[0],n[6]);
			printf("%d %d %d\n\n",n[4],n[7],n[3]);
		}
	}
	return 0;
}
