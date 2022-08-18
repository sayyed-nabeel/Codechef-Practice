#include<stdio.h>

int main(){
    int t,c,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&c,&x,&y);
        int choco_req=c-x;
        int choco_cost=choco_req*y;
        printf("%d\n",choco_cost);
    }

    return 0;
}