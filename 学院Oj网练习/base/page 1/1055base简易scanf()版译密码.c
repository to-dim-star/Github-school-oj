#include<stdio.h>

int main (){
	char a;
	
	while(scanf("%c",&a)!=EOF){
		
		
		if(a>='A' && a<='z'){
			a+=4;
			printf("%c",a);
		}
		else{
			printf("%c",a);
		}
		
	}
	
	
	
	return 0;
}
