#include<stdio.h>
int main (){
	double x,y;
	char f;
	int flag;
	while(scanf("%lf",&x)!=EOF){flag=0;
		scanf("%c%lf",&f,&y);
		if(f=='+'){
			printf("=%lf\n",x+y);continue;
		}
		else if(f=='-'){
			printf("=%lf\n",x-y);continue;
		}
		else if(f=='*'){
			printf("=%lf\n",x*y);continue;
		}
		else if(f=='/'){
			if(y!=0){
				printf("=%lf\n",x/y);continue;
			}
			else{flag=1;}
		}else{
			flag=1;
		}
		if(flag){
			printf("Enter date error\n");
		}
	} 
	return 0;//用float就会错,在计算机里有点不一样 
}
