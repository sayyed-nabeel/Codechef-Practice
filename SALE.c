#include<stdio.h>

int main(){
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        if(a>=c && b>=c){
            int cost=a+b;
            printf("%d\n",cost);
        }
        else if(a>=b && c>=b){
            int cost=a+c;
            printf("%d\n",cost);
        }
       else{
            int cost=b+c;
            printf("%d\n",cost);
        }
    }

    return 0;
}