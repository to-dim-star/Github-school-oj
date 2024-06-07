/*#include<stdio.h>
int main (){
	int a,n;
	while(scanf("%d",&a)!=EOF){n=1000;
		while(n){
			printf("%d ",(a/n)%10);
			n/=10;
		}printf("\n");
	}
	return 0;
} */
#include<stdio.h>
void kg(char b[]){
	int i,j,cot=0;
	for(i=0;i<4;i++){
		for(j=4+i;j>=i+1+cot;j--){
			b[j]=b[j-1];
		}b[j+1]=' ';cot++;
	}
}
int main (){
	char b[9]={0};
	while(scanf("%s",b)!=EOF){
		kg(b);
		printf("%s\n",b);
	}
	return 0;//==不偷懒还不行了 
} 
