/*#include<stdio.h>
#include<math.h>
int main()
{
double x0,x1=1.5;
double f,f1;
do
{
x0 = x1;
f = 2*x0*x0*x0 - 4 * x0*x0 + 3 * x0 - 6;
f1 = 6 * x0*x0 - 8 * x0 + 3;
x1 = x0 - f / f1;
} while (fabs(x0 - x1) >= 1e-5);
printf("The root of equation is %5.2f",x1);
return 0;
}*/
#include <stdio.h>
#include <math.h>
int main(){
	float x,x0,f,f0;
	x=1.5;  
		   
	do	{
	    x0=x;      
		f0=((2*x-4)*x+3)*x-6;  
	//求得在x0处解    
		f=(6*x0-8)*x0+3;     
	// 在（x0 ，f0）处导数    
		x=x0-f0/f;        
	}while(fabs(x-x0)>=1e-6);    
	printf("the root is %5.2f",x0);   
	return 0;
}
