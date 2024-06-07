#include<stdio.h>
#include<string.h>
#include<math.h>
int main (){
	char n[15]; 
	int len,i,cot;
	double sum;
	while(scanf("%s",n)!=EOF){ 
		len=strlen(n);sum=0;cot=0;
		sum+=n[len-1]-'A'+1;
		for(i=len-2;i>-1;i--){
			cot++;
			sum+=(n[i]-'A'+1)*pow(26,cot);
		}
		printf("%.lf\n",sum);
	}
				
	return 0;
} 
