#include<stdio.h>
int main()
{
	int i=0,n=1;
	char x;
	while(scanf("%c",&x)!=EOF)
	{
			if(x==' ')
		{
		    n++;
		}	
		if(x=='\n')
		{
			i++;
			printf("case %d:%d\n",i,n);
		    n=1;	
		}
	}
	return 0;
}
