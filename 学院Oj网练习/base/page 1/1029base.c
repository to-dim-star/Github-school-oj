#include<stdio.h> 
int main (){
	int a,b,t=0;
	int i,s,d,jg=1,jgg=0,jjg=1,gjg=0;
	
	while(scanf("%d %d",&a,&b)!=EOF){
		t=0;
		jg=1;
		jgg=0;
		jjg=1;gjg=0;
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		for(i=a+1;i<b;i++){
			jg=1;//=================每算完一次(a+1)回归一次jg; 
			for(s=2;s<=i;s++){
				jg*=s;//======a+n!也没问题; 
			}
			gjg+=jg;
		}
		for(d=2;d<=b;d++){
			jjg*=d;//======这里算b!没问题... 
		}
		jgg=gjg+jgg+jjg;
		printf("%d\n",jgg);
	}
	
	
	
	return 0;
}
