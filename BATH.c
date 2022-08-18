#include<stdio.h>

int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        if(x>=2*y){
        printf("%d\n",x/(y*2));
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}