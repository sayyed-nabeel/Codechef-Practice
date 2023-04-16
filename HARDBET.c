#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a<=c && a<=b){
            printf("Draw\n");
        }
        else if(b<a && b<c){
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }

    }

    return 0;
}