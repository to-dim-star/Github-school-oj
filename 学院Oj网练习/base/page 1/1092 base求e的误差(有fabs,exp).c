#include<stdio.h>
#include<math.h> 
int main (){
	double sum,n;
	while(scanf("%lf",&n)!=EOF){
		sum=fabs(exp(n)-(1+n));
		printf("%lf\n",sum);
	} 
	return 0;
}
