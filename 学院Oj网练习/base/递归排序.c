#include <stdio.h>
int n;
int m;
int flag[10] = {};
int num[10];
int i = 1;
void dg(int i,int cot){
    if(cot == m){
        for(i = 0;i<m;i++){
            if(i==n){
                printf("%d",num[i]);
            }else{
                printf("%d ",num[i]);
            }
        }
        printf("\n");
        return;
    }
    for(;i<=n;i++){
        if(flag[i]==0){
            num[cot] = i;
            flag[i]=1;
            dg(i+1,cot+1);
            flag[i]=0;
        }    
    }
}

int main(void){
    scanf("%d %d",&n,&m);
    dg(1,0);
}
