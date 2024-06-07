#include<stdio.h>
#include<math.h> 
int main (){
	int n,i;
	double sum;
	scanf("%d",&n); 
	sum=0;
	for(i=1;i<=n;i++){
		sum+=pow(7,i);
	}
	printf("7+7*7+7*7*7+...=%.lf",sum);
	return 0;
}
