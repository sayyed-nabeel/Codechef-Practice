#include<stdio.h>

int main(){
    int t,x,y,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&x,&y,&a,&b);
        int cocoA=a/x;
        int cocoB=b/y;
        int tot_amt_coco=cocoA+cocoB;
        printf("%d\n",tot_amt_coco);
    }

    return 0;
}