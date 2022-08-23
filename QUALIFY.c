#include<stdio.h>

int main(){
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&z,&x,&y);
        int totmarks=(x*1)+(y*2);
        if(totmarks>=z){
            printf("Qualify\n");
        }
        else{
            printf("NotQualify\n");
        }
    }

    return 0;
}