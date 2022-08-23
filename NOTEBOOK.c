#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int totpages=n*1000;
        int totnotebooks=totpages/100;
        printf("%d\n",totnotebooks);


    }

    return 0;
}