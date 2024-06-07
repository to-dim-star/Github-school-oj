#include<stdio.h>
int main (){
	int n,sum1,sum2,i,j;
	int a[114][114];
	int flag;
	while(scanf("%d",&n)!=EOF){flag=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++){sum1=0;sum2=0;
			for(j=0;j<n;j++){
				sum1+=a[i][j];
			} 
			for(j=0;j<n;j++){
				sum2+=a[j][i];
			}if(sum1!=sum2){
				flag=1;break;
			}
		}
		if(flag){
			printf("No\n");
		}
		else{
			printf("Yes %d\n",sum1);
		}
	} 
	return 0;
}
