#include<stdio.h>
#include<math.h>
int main(){
	
	int n,i;
	int q=1,t,p;
	int s[8];
	double sum;
	
	scanf("%d",&n);//==输入是几位数几次方 
	for(i=1;i<n;i++){//==如此算q是从n位百数开始 
		q*=10;//====看是几位数以限制范围; 
	}
	for(t=q;t<(q*10);t++){//==到n+1位百数结束 
		sum=0;p=t;
		for(i=1;i<=n;i++){
			s[i]=p%10;//===拿到个位 
			p/=10;
			sum+=pow(s[i],n);//===各位平方相加 
			//===pow得double才较准 
		}
		if(sum==t){
			printf("%.lf\n",sum);
		}
	}
	
	return 0;
} 
