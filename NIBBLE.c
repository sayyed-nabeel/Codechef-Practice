#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int nibble=n%4;
        if(nibble!=0){
            printf("Not Good\n");
        }
        else{
            printf("Good\n");
        }

    }

    return 0;
}