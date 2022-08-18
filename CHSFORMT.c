#include<stdio.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        int sum=a+b;
        if(sum<3){
            printf("1\n");
        }
        else if(sum>=3 && sum<=10){
            printf("2\n");
        }
        else if(sum>=11 && sum<=60){
            printf("3\n");
        }
        else{
            printf("4\n");
        }
    }

    return 0;
}