#include<stdio.h>

int main(){
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        int sum1,sum2;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        sum1=a+c;
        sum2=b+d;
        if(sum1==180 && sum2==180){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }

    return 0;
}