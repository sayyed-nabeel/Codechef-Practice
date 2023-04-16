#include<stdio.h>

int main(){
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&x,&y,&z);
        int mangowt=z-y;
        int tot_mango=mangowt/x;
        printf("%d\n",tot_mango);
    }

    return 0;

}

