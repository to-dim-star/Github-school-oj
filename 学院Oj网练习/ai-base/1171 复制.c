#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int i, j,len;
    
    while (gets(input)!=NULL) {// 去除输入字符末尾的换行符
        scanf("%d %d", &i ,&j);
        getchar();
		len=strlen(input);
		j=j<len?j:len;
        for(;i<=j;i++){
			printf("%c",input[i]);
		}
        printf("\n");
     }

     return 0;
 }
