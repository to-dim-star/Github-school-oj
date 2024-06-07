#include<stdio.h>
int main (){
	int i,s,n=0;
	char a[10],b[10];
	scanf("%s",a);
	while(scanf("%s",b)!=EOF){s=0;n++;
		for(i=0;i<10;i++){
			if(a[i]==b[i]){
				s+=10;
			}
		}printf("%d:%d\n",n,s);
	} 
	return 0;
}
