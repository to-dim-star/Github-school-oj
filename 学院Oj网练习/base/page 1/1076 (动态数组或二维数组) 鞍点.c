#include<stdio.h>
#include<stdlib.h>
int main (){
	int m,n,i,cot=0,flag,lag;
	int *a,hmax,h,cotl,jg;//动态版 
	int j,k;
	while(scanf("%d %d",&m,&n)!=EOF){flag=1;cot++;
		if(m==0 && n==0){
			break;
		}
		a=(int*)malloc(m*n*sizeof(int));//int *a=(int*)malloc(n*sizeof(int));
		for(i=0;i<m*n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<m*n;i+=n){hmax=0;lag=0;
			for(j=i;j<i+n;j++){
				if(hmax<a[j]){
					hmax=a[j];
					h=j;
				}
			}k=h;cotl=0;
			while(k){
				k-=n;cotl++;
			}h-=cotl*n;
			for(k=h;k<m*n;k+=n){
				if(a[k]<hmax){
					lag=0;
					break;
				}
				else{
					++lag;
				}
			}if(lag==m){
				jg=hmax;
				break;
			}else if(i==(m-1)*n && lag!=m){
				flag=0;
			}
		}free(a);
		printf("Case %d:",cot);
		if(!flag){
			printf("No\n");
		}else{
			printf("%d\n",jg);//===时间巨长用不了一点; 
		}
	} 
	return 0;
}
