#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int polybagsreq=(n+9)/10;
        printf("%d",polybagsreq);
    }

    return 0;
}