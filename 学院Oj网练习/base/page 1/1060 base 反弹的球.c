#include<stdio.h>
int main (){
	double s,h;
	int n,i;
	while(scanf("%d",&n)!=EOF){
        s=100;h=50; 
		for(i=1;i<n;i++){
			 s+=h*2;
			 h/=2;
		}
		printf("S=%.2lf H=%.2lf\n",s,h);
	}
				
	return 0;
}
