#include<stdio.h>
#define pi 3.1415926//wcԤ�����Ȼ��#define ���� ֵ ;
int main (){
	double r,c;
	while(scanf("%lf",&r)!=EOF){
		c=2*pi*r;
		printf("%.2f\n",c);
	}
	return 0;
}
