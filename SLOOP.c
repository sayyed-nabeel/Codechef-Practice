#include<stdio.h>

int main(){
    int t,m,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&s);
        int compsong=m/s;
        printf("%d\n",compsong);
    }

    return 0;
}