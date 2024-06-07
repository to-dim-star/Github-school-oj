#include<stdio.h>

int panduan(int a){
	int i;
	for(i=2;i<a-1;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main () {
	int n,m;
	int i,c,b[5],d[5],e,f,g,j,k;
	scanf("%d %d",&n,&m);
	
	for(i=n;i<=m;i++){
		if(panduan(i)){
			c=i;e=0;
			while(c>0){
				b[e]=c%10;
				c/=10;e++;
			};g=e;
			for(f=0;f<e;f++){
				g--;
				d[f]=b[g];
			}
			for(j=0;j<e;j++){
				if(b[j]==d[j]){
					k=1;
				}
				else{
					k=0;break;
				}
			}
			if(k){
				printf("%d\n",i);
			}
			
		}
	}
	
	return 0;
}
