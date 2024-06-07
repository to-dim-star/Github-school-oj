#include<stdio.h>
int main (){
	int m,n,i,j,k,cot=0,flag,lag;
	int a[30][30],hmax,lie,jg;
	
	while(scanf("%d %d",&m,&n)!=EOF){cot++;
		if(m==0 && n==0){
			break;
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++){hmax=0;lie=0;
			for(j=0;j<n;j++){
				if(hmax<a[i][j]){
					hmax=a[i][j];
					lie=j;
				}
			}for(j=0;j<m;j++){lag=1;
				if(a[j][lie]<hmax){
					lag=0;
					break;
				}
			}if(lag){
				jg=hmax;flag=1;break;
			}else if(i==m-1){
				flag=0;
			}
		}printf("Case %d: ",cot);
		if(!flag){
			printf("No\n");
		}else{
			printf("%d\n",jg);
		}
	} 
	return 0;
}
