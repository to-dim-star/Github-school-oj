#include <stdio.h>
#include <math.h>
/*
 * ���Լ���ĵݹ飺
 * 1����a��������b�������Լ����b
 * 2�����1�����������Լ������b��a%b�����Լ��
 * ʾ������(140,21)
 * 140%21 = 14
 * 21%14 = 7
 * 14%7 = 0
 * ����7
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
