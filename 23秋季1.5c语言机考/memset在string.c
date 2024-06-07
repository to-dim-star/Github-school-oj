#include<stdio.h>
#include<string.h>
#include<assert.h>

void * my_memset(void *dst, int val, size_t count)
{
    //把val传给*dst时两个变量类型要相同，需要用到强制类型转换        
	//assert(dst);                    //这里需要检验dst的有效性
	char* ret = (char*)dst;         
	while (count--)                
	{
		*ret++ = (char)val;
	}
	return dst;
}

int main (){
	int a[100];
	my_memset(a,-1,sizeof(a));
	printf("2=%c--\n",(char)(2));
	printf("1=%c--\n",(char)(1)); 
	printf("0=%c--\n",(char)(0));
	printf("-1=%c--\n",(char)(-1));
	printf("-2=%c--\n",(char)(-2));
	return 0;
} 
