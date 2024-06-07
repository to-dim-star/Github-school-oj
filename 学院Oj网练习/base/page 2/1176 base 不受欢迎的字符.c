#include<stdio.h>
#include<string.h>
void huan(char a[],int i,int len){
	while(i<len-1){
		a[i]=a[i+1];
		i++;
	}a[len-1]='\0';
}
int main (){
	char a[161];
	int len,i;
	while(gets(a)!=NULL){
		len=strlen(a);
		for(i=0;i<len;i++){
			if(a[i]=='#'){
				huan(a,i,len);
				len--;i--;
			}
		}printf("%s\n",a);
	} 	
	return 0;
} 
