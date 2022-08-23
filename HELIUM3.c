#include<stdio.h>

int main(){
    int t,a,b,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&x,&y);
        int totpowreqi=a*b;
        int totpowgen=x*y;
        if(totpowgen>=totpowreqi){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}