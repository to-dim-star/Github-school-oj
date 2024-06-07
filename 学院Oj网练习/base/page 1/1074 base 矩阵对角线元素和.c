#include<stdio.h>
int main (){
	int n,sum,i,j,cot;
	int a[114][114];
	while(scanf("%d",&n)!=EOF){sum=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}cot=1;
		for(i=0;i<n;i++){
			sum+=a[i][i];
			sum+=a[i][n-cot];
			cot++;
		}
		if(n%2!=0){
			sum-=a[n/2][n/2];
		}
		printf("%d\n",sum);
	} 
	return 0;
}
