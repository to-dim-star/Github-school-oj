#include<stdio.h>
#include<string.h>
int main (){
	char a[90];
	int len,i;
	fgets(a,sizeof(a),stdin);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]>='A'&&a[i]<='M'){
			a[i]+=(('N'-a[i])*2)-1;
		}else if(a[i]>='N'&& a[i]<='Z'){
			a[i]-=((a[i]-'M')*2)-1;
		}
	}printf("%s",a);
	return 0;
}
