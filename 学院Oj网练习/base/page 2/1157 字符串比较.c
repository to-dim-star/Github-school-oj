#include<stdio.h>
int mystrcmp(char a[],char b[]){//==a是大字符,b是要找的字符 
	int i=0;
	while(a[i]!='\0' && a[i]==b[i]){
		i++;
	}return a[i]-b[i];
	/*while(*a==*b && *a!='\0'){
		a++;b++;
	}return *a-*b;*/
}
int main (){
	char a[100]={0},b[100]={0};
	while(gets(a)!=NULL){
		gets(b);
		printf("%d\n",mystrcmp(a,b));
	}
	return 0;
}
