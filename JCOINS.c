#include<stdio.h>

int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        print("%d",(10*x)+(5*y));
    }

    return 0;
}