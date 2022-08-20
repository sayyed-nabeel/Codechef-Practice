#include<stdio.h>

int main(){
    int t,k,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&k,&x);
        int max_filled=k-x;
        printf("%d\n",max_filled);

    }

    return 0;
}