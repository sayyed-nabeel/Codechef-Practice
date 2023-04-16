#include<stdio.h>

int main(){
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&x);
        int a=0;
        int b=0;
        int c=0;
        if(x%3==0){
            a+=x/3;
        }
        else if(x%3==1){
            a+=(x/3)+1;
            b+=2;
        }
        else if(x%3==2){
            a+=(x/3)+1;
            b++;
        }
        if(a+b<=n){
            printf("Yes\n");
            printf("%d %d %d\n",a,b,n-a-b);
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}