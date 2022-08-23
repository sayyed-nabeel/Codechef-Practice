#include<stdio.h>

int main(){
    int time,x;
    scanf("%d",&x);
    while(x--){
        scanf("%d",&time);
        if(time<=7){
            printf("Yes");
        }
        else{
            printf("No");
        }
        printf("\n");
    }



    return 0;
}