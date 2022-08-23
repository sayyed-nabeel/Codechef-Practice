#include<stdio.h>

int main(){
    int x,y;
        scanf("%d %d",&x,&y);
        int speed2x=y/2;
        int remainingtime=x-y;
        int tottimespent=remainingtime+speed2x;
        printf("%d",tottimespent);


    return 0;
}