#include<stdio.h>
 
int main()
{
	char ch;
	while(scanf("%c",&ch)!=EOF){
		if(ch>='a' && ch<='z'){
			printf("%c\n", ch-32);
		}

		
	}
	
 
	return 0;
}
