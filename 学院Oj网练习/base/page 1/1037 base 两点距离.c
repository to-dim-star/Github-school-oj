#include<stdio.h>
#include<math.h>
int main (){
	double sum,a,b,c,d; 
	while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF){
		sum=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		printf("%.2f\n",sum);
		
	}
	return 0;
}
