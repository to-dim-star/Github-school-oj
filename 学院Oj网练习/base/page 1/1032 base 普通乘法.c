#include<stdio.h>
int main (){
	float a,b;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%f %f",&a,&b);
		printf("%.3f\n",a*b);
	}
	return 0;
}
