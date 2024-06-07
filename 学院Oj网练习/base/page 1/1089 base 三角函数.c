#include<stdio.h>
#include<math.h>
#define pi 3.1415926535
int main (){
	double sum,sin1,cos1,tan1,cot1,csc1,sec1;
	double x,xx;
	while(scanf("%lf",&xx)!=EOF){sum=0;
		x=xx*pi/180;
		sum=sin(x)+cos(x)+tan(x)+(1/tan(x))+(1/sin(x))+(1/cos(x));
		printf("Sum=%.2lf\n",sum);
	}
	return 0;
} 
