#include<stdio.h>
#define pi 3.14159
int main (){
	int n,i;
	
	double r,s;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		scanf("%lf",&r);
		
		s=pi*r*r;
		
		printf("Case %d: %.3f\n",i,s); 
		
	}
	
	return 0;
}
