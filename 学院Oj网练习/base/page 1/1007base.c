#include<stdio.h>

int jiecheng(int a){
	
	int i,jg=1;
	
	for(i=2;i<=a;i++){
		jg=i*jg;
	}
	return jg;
	
}
int main (){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",jiecheng(n));
	}
	
	return 0;
}
