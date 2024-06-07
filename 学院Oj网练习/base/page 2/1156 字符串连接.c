#include<stdio.h>
#include<string.h>
int main (){
	char a[150]={0},b[100];
	int lena,lenb,i,cot;
	while(scanf("%s",a)!=EOF){cot=0;
		scanf("%s",b);
		lena=strlen(a);
		lenb=strlen(b);
		for(i=lena;i<lena+lenb;i++){
			a[i]=b[cot++];
		}
		printf("%s %d\n",a,lena+lenb);
		while(i--){
			a[i]='\0';
		}
	}
	return 0;
} 
