#include<stdio.h>
#include<math.h>
typedef struct Point{
	int x;
	int y;
}point;

int main () {
	point a,b,c;
	double suma,sumb,sumc,sum,p;
	while(scanf("%d %d",&a.x,&a.y)!=EOF){
		scanf("%d %d",&b.x,&b.y);
		scanf("%d %d",&c.x,&c.y);
		suma=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
		sumb=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
		sumc=sqrt((a.x-c.x)*(a.x-c.x)+(a.y-c.y)*(a.y-c.y));
		p=0.5*(suma+sumb+sumc);
		sum=sqrt(p*(p-suma)*(p-sumb)*(p-sumc));//==海伦 
		printf("%.1lf\n",sum);
	};
	return 0;
}
//double hlshi(point a,point b,point c){
	//0.5*fabs(行列式:|a.x  a.x  1|)
	//        (       |b.x  b.x  1|)
	//   	  (       |c.x  c.x  1|);
//}
