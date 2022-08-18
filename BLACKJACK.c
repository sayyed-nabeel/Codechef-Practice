#include<stdio.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        int sum=a+b;
        if(sum>=11){
            int reqnumber=21-sum;
            printf("%d\n",reqnumber);
        }
        else{
            printf("-1\n");
        }
    }


    return 0;
}