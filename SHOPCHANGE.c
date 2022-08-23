#include<stdio.h>

int main(){
    int t,amtgiven;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&amtgiven);
        printf("%d\n",100-amtgiven);
    }

    return 0;
}