#include <stdio.h>
#include <math.h>
/*
 * 最大公约数的递归：
 * 1、若a可以整除b，则最大公约数是b
 * 2、如果1不成立，最大公约数便是b与a%b的最大公约数
 * 示例：求(140,21)
 * 140%21 = 14
 * 21%14 = 7
 * 14%7 = 0
 * 返回7
 * */
int gcd(int a,int b){
 if(a%b==0)
  return b;
 return gcd(b,a%b);
}
int main(void){
 int a=10,b=8;
 scanf("%d %d",&a,&b);
 printf("GCD: A=>%d, B=>%d (A,B)=%d\n",a,b,gcd(a,b));
 return 0;
}
