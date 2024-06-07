#include<stdio.h>
#include<math.h>
int pand(double x,double y,int a,int b){
	double d;
	d=sqrt((x-a)*(x-a)+(y-b)*(y-b));
	if(d<=1){
		return 1;
	}
	return 0;
}
int main (){
	double x,y;
	while(scanf("%lf %lf",&x,&y)!=EOF){
        if(pand(x,y,0,0) || pand(x,y,2,2) || pand(x,y,-2,-2) || pand(x,y,2,-2) || pand(x,y,-2,2)){
			printf("10\n");continue;
		}
		printf("0\n");
		
	}
				
	return 0;
} 
