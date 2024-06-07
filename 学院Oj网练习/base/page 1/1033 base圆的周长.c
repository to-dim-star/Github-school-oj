#include<stdio.h>
#define pi 3.1415926//wc预处理居然是#define 宏名 值 ;
int main (){
	double r,c;
	while(scanf("%lf",&r)!=EOF){
		c=2*pi*r;
		printf("%.2f\n",c);
	}
	return 0;
}
