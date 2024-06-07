#include<stdio.h>
int main (){
	int a[11]={0},b,c;
	int n,i,j,max=0,maxx=0,flag=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b);
		while(b){
			c=b%10;
			b/=10;
			a[c]++;
		}
	}
		for(j=0;j<10;j++){
			if(a[j]>max){
				max=a[j];
				maxx=j;
			}
		}printf("%d\n",maxx);
		a[maxx]=0;
		while(flag){
			for(j=0;j<10;j++){
				if(a[j]==max){
					printf("%d\n",j);
					a[j]=0;
					flag=1;break;
				}else flag=0;
			}
		}
	return 0;
}
