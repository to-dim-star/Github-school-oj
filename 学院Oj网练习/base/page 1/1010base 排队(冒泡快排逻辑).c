#include<stdio.h>
#include<stdlib.h>
/*int main (){
	
	int a,b,c,n,i,t;
	int x[4]={0},flag;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		n=3;x[0]=a;x[1]=b;x[2]=c;flag=1;
		while(n-- && flag){
			flag=0;
			for(i=0;i<n;i++){
				if(x[i]>x[i+1]){flag=1;
					t=x[i+1];
					x[i+1]=x[i];
					x[i]=t;
				}
			}
		}
		for(i=0;i<3;i++){
			printf("%d ",x[i]);//=====冒泡牛刀版 
		} printf("\n");
	}
	return 0;
}*/
/*int compare(const void *a,const void *b){
	return *(int*)a-*(int*)b;//====老难记了 
}
int main (){
	int a,b,c,i;
	int x[4]={0};
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		x[0]=a;x[1]=b;x[2]=c;
		qsort(x,3,sizeof(int),compare);
		for(i=0;i<3;i++){
			printf("%d ",x[i]);//=====qsort牛刀版 
		} printf("\n");
	}
	return 0;
}*/

int main (){
	int a,b,c,max,min,z,t;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		max=((t=(a>b?a:b))>c?t:c);
		min=((t=(a<b?a:b))<c?t:c);
		z=a+b+c-max-min;//===妙蛙妙蛙 
		printf("%d %d %d",min,z,max);//==逻辑版 
		printf("\n");
	}
	return 0;
} 
//====================提交结论对于三个数还是逻辑版最好 
