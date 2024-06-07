#include<stdio.h>
int main (){
	int t,m,n,k,i,j,cot=0;
	char a[21][21][15]={0};
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&m,&n,&k);
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				scanf("%s",&a[i][j][0]);
			}
		}printf("Case %d:",++cot);
		while(k--){
			scanf("%d %d",&i,&j);
			printf("%s ",&a[i][j][0]);
		}printf("\n");
	}
	return 0;
}
