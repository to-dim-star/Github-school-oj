#include<stdio.h>
#include<math.h>
typedef struct Point{
	int x;
	int y;
}point;

int main () {
	point a,b;
	double sum;
	while(scanf("%d %d",&a.x,&a.y)!=EOF){
		scanf("%d %d",&b.x,&b.y);
		sum=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
		printf("%.1lf\n",sum);
	};
	return 0;
}
