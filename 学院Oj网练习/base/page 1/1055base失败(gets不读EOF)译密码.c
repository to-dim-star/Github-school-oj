#include<stdio.h>
#include<string.h> 
int main (){
	char a[1001];
	int len,i;
	while(gets(a)!=EOF){
		len=strlen(a);
		for(i=0;i<len;i++){
			if(a[i]>='A' && a[i]<='z'){
				a[i]+=4;
			}
			
		}
		for(i=0;i<len;i++){
			printf("%c",a[i]);
			if(i==len-1){
				printf("\n");
			}
		}
	}
	
	
	
	return 0;
}
