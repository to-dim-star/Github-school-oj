#include<stdio.h> 
void ck(char a,int b[]){//判断是否在a到z内并加到b数组中 
	int i;
	for(i=97;i<123;i++){
		if(a==i){
			b[i-97]++;
		}
	}
}
int main (){
	char C='a',a;
	int b[26]={},i;
	a=getchar();
	while(a!='#'){
		
		ck(a,b);
		a=getchar();
	}
	for(i=0;i<26;i++){
		printf("%c %d\n",C,b[i]);
		C++;
	}
	
	return 0;
}
