#include<stdio.h>
int main (){
	int a,b,c,d,l,k;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){
		l=c-a;
		k=b-d;
		printf("%d\n",l*k);
	}
	return 0;
}
