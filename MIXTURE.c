#include<stdio.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
       
        if(a>0 && b>0){
            printf("Solution\n");
        }
        else if(a==0){
            printf("Liquid\n");
        }
        else{
            printf("Solid\n");
        }
    }

    return 0;
}