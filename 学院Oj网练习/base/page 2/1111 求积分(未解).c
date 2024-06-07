/*#include <stdio.h>
#include <math.h>

#define e 2.718281828459

double func(double x) {
    return x * (x + 1) * (x + 2) * exp(x + 1);
}

double calculateIntegral(double a, double b, int n) {
    double delta_x = (b - a) / n;
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double x_i = a + i * delta_x;
        result += func(x_i) * delta_x;
    }

    return result;
}

int main() {
    int num_cases;
    scanf("%d", &num_cases);

    for (int i = 0; i < num_cases; i++) {
        double a, b;
        scanf("%lf %lf", &a, &b);

        int num_intervals = 1000;  // 将区间平均分成1000份
        double result = calculateIntegral(a, b, num_intervals);//ai都解不了 

        printf("%.6f\n", result);
    }

    return 0;
}*/


#include<stdio.h>
#include<math.h>
#define e 2.718281828459
double f(double x){
	return (x*(x+1)*(x+2)*pow(e,(x+1)));
}
double gaoshu(double a,double b);

int main () {
	double a,b;
	while(scanf("%lf %lf",&a,&b)!=EOF){
		printf("%f\n",gaoshu(a,b));
	}
	return 0;
}
double gaoshu(double a,double b){ //大佬的,思路清晰 
	double dx,sum=0,i;
	 
	dx=((b-a)/1000);
	for(i=a+dx;i<b;i+=dx){
		sum+=f(i)*dx;
	}
	return sum;
}
/*{ 
	double x,xx,sum=0;
	x=a;	
	xx=a+((b-a)/1000);//自己写的垃圾货 
	while(x<=b){	
		sum+=((b-a)/1000)*f(x);//======固定宽度*f(x)而已; 
		x+=((b-a)/1000);
		xx+=((b-a)/1000);
	}	
	return sum;
}*/
