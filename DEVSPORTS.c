#include<stdio.h>

int main(){
    int t,z,y,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d",&z,&y,&a,&b,&c);
        int amt_left=z-y;
        int tot_sports_cost=a+b+c;
        if(amt_left>=tot_sports_cost){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }

    return 0;
}