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
			printf("%d ",x[i]);//=====ð��ţ���� 
		} printf("\n");
	}
	return 0;
}*/
/*int compare(const void *a,const void *b){
	return *(int*)a-*(int*)b;//====���Ѽ��� 
}
int main (){
	int a,b,c,i;
	int x[4]={0};
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		x[0]=a;x[1]=b;x[2]=c;
		qsort(x,3,sizeof(int),compare);
		for(i=0;i<3;i++){
			printf("%d ",x[i]);//=====qsortţ���� 
		} printf("\n");
	}
	return 0;
}*/

int main (){
	int a,b,c,max,min,z,t;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		max=((t=(a>b?a:b))>c?t:c);
		min=((t=(a<b?a:b))<c?t:c);
		z=a+b+c-max-min;//===�������� 
		printf("%d %d %d",min,z,max);//==�߼��� 
		printf("\n");
	}
	return 0;
} 
//====================�ύ���۶��������������߼������ 
