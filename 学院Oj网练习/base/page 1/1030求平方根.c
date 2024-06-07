#include<stdio.h>
#include<math.h>
int main (){
	
	double x,jg;
	while(scanf("%lf",&x)!=EOF){
		jg=sqrt(x);
		printf("%.6f\n",jg);
	}
	
	return 0;
}
