#include<stdio.h>
const double a1=0.0414;
const double a2=0.0468;
const double a3=0.054;
const double a5=0.0585;
 int main()
{
 	double m,sum;
 	int i,s,n;
 	int cot;
 	
	while(scanf("%lf %d %d",&m,&s,&n)!=EOF){
		sum=m;cot=n/s;
		switch(s){
		 	case 1:
		 	while(cot--){
			 	for(i=0;i<1;i++){
					sum+=m*a1;
				}m=sum;
			}printf("%.2f\n",sum);
			break;
		 	case 2:
			while(cot--){
			 	for(i=0;i<2;i++){
			 		sum+=m*a2;
				}m=sum;
			 	}printf("%.2f\n",sum);
			break;
		 	case 3:
			while(cot--){
			 	for(i=0;i<3;i++){
			 		sum+=m*a3;
			 	}m=sum;
			 	}printf("%.2f\n",sum);
			break;
		 	case 5:
			while(cot--){
			 	for(i=0;i<5;i++){
			 		sum+=m*a5;
			 	}m=sum;
			}printf("%.2f\n",sum);
			break;
		}
	}
 	return 0;
}
