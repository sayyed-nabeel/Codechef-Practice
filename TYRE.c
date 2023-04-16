#include<stdio.h>

int main(){
    int t,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        int tot_wheels=(2*n)+(4*m);
        printf("%d\n",tot_wheels);
    }
    return 0;
}