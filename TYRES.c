#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%4==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}