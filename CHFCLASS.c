#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int holiday=n/7;
        int x=n%7;
        if(x==6){
            printf("%d\n",holiday+1);
        }
        else{
            printf("%d\n",holiday);
        }
    }

    return 0;
}