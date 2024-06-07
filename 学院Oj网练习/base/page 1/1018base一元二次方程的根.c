#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,q,p,j;
    float derta;
     
    while(scanf("%f %f %f",&a,&b,&c)!=EOF){
		if(a==0&&b==0&&c==0){
		    
		    return 0;//若此不return 0则下方得else if补条件,不然都执行... 
		}
		derta=(b*b)-(4*a*c);
		q=(-b-sqrt(derta))/(2*a);
		p=(-b+sqrt(derta))/(2*a);
		if(q>p){
			j=q;
			q=p;
			p=j;
		}
		if(derta>=0){
		    printf("x1=%.2f x2=%.2f\n",q,p);
		}
		else{
		    printf("Unanswered\n");//运算优先级不清楚...*/得() 
		}
	}
    
     
    return 0;
}
