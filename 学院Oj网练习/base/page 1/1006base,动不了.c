#include<stdio.h>
#define pi 3.14159
int main (){
	int n,i,q;
	
	double r;
	
	scanf("%d",&n);
	
	double s[n];
	
	for(i=0;i<n;i++){
		
		scanf("%lf",&r);
		
		s[i]=pi*r*r;
		 
	}
	for(q=0;q<n;q++){
		
		printf("Case %d£º%.3f\n",q+1,s[q]);
		
	}
	
	return 0;
}
 
