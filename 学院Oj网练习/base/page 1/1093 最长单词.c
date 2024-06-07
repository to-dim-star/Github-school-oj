#include<stdio.h>
#include<string.h>
int main (){
	int i,len,chang[1145]={0},cot;
	char s[11451]={0};
	int lenmax,lenlenmax,j;
	
	while(gets(s)!=NULL){len=0;lenlenmax=0;//===原来如此gets!=NULL就行
		lenmax=strlen(s);
		for(i=0;i<lenmax;i++){
			if((s[i]<=122 && s[i]>=97 )|| (s[i]>=65 && s[i]<=90)){
				++len;
			}
			else{
				if(lenlenmax<len){cot=0;
					lenlenmax=len;
					chang[cot]=i-len;
				}
				else if(lenlenmax==len){
					chang[++cot]=i-len;
				}				
				len=0;
			}
		}
		//赌它不按字典序 赌赢啦哈哈哈哈哈哈哈哈哈?
		for(i=0;i<=cot;i++){
			for(j=chang[i];j<chang[i]+lenlenmax;j++){
				printf("%c",s[j]);
			} 
			printf(" ");
		}printf("\n");
	}
	return 0;
} 
