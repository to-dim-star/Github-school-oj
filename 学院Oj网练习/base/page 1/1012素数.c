#include<stdio.h>
 int main()
{
 	int i,n,flag;
 	
	while(scanf("%d",&n)!=EOF){flag=1;
		if(n==2||n==5){
			printf("Yes\n");continue;
		}
		if(n==4){
			printf("No\n");continue;
		}
		for(i=2;i*i<=n;i++){//2024.2.18 --> (i<=sqrt(n))==(i*i<=n);证明平方根也行,测试范围:1到100素数 
			if(n%i==0){//========注意是n%i不是i&n;同时证实了一半勉强可行 
				printf("No\n");flag=0;
				break;
			}
		}
		if(flag){
			printf("Yes\n");
		}
	}
 	return 0;
}
