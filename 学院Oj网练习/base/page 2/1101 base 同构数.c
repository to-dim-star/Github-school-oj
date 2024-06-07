#include<stdio.h>
#include<string.h>
int pormystrcmp(char a[],char b[]){//==a是大字符,b是要找的字符 //这题竟然要从后往前数的定制型; 
	int lenb=strlen(b),i,cot=0;
	for(i=0;i<lenb;i++){
		if(a[i]==b[i]){
			cot++;
		}
	}if(cot==lenb){
		return 1;
	}return 0;
}
int main (){
	int n;
	int i,j,cot,t;
	char fang[18]={0},shu[10]={0};
	scanf("%d",&n);
	if(n>1){
		printf("1 ");
	}
	if(n>5){
		printf("5 ");
	}if(n>6){
		printf("6 ");
	}for(i=25;i<=n;i++){
		j=i*i;cot=0;
		while(j){
			t=j%10;
			fang[cot]=(char)(t+48);
			j/=10;cot++;
		}j=i;cot=0;
		while(j){
			t=j%10;
			shu[cot]=(char)(t+48);
			j/=10;cot++;
		}if(pormystrcmp(fang,shu)){
			printf("%d ",i);
		}	
	}
	return 0;
}
/*int mystrcmp(char a[],char b[]){//==a是大字符,b是要找的字符 
	int lena=strlen(a),lenb=strlen(b),i,j,max=lena>lenb?lena:lenb,flag;
	for(i=0;i<max;i++){
		if(a[i]==b[0]){flag=1;
			for(j=1;j<lenb;j++){
				if(a[i+j]!=b[j]){
					flag=0;
				}
			}if(flag){
				return 1;
			}
		}
	}return 0;
} */ //这是正常的mystrcmp;
