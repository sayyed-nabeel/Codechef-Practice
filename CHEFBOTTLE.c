#include<stdio.h>

int main(){
    int t,n,x,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&x,&k);
    
        if(k/x>n){
            printf("%d\n",n);
        }
        else{
            printf("%d\n",k/x);
        }
    }

    return 0;
}