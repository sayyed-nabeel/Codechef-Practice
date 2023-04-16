#include<stdio.h>

int main(){
    int t,x,y,z,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d %d",&x,&a,&y,&b,&z,&c);
        if(x<=a && y<=b && z>=c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}