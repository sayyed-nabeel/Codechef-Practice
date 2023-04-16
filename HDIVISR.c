#include<stdio.h>

int main(){
    int n,max;
    for(int i=1; i<10;i++){
        scanf("%d",&n);
        if(n%i==0){
            max=i;
        }
    
    }
    printf("%d\n",max);

    return 0;
}