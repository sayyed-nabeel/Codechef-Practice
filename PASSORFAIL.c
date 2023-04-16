#include<stdio.h>

int main(){
    int t,n,x,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&x,&p);
        int totmarks=3*n;
        int penalty=n-x;
        int marksobtained=(3*x)-penalty;
        if(marksobtained>=p){
            printf("PASS\n");
        }
        else{

            printf("FAIL\n");
        }


    }

    return 0;
}