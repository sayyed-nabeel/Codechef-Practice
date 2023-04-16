#include<stdio.h>

int main(){
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        int count=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            if(x>=10 && x<=60){
              count++;
            }
            
        }printf("%d\n",count);
    }

    return 0;
}