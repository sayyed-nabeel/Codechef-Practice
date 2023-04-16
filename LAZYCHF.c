#include<stdio.h>

int main(){
    int t,x,m,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&m,&d);
        int tot_time=m*x;
        int upper_bound=x+d;
        if(tot_time<=upper_bound){
            printf("%d\n",tot_time);
        }
        else{
            printf("%d\n",upper_bound);
        }
    }

    return 0;
}