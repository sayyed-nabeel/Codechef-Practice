#include<stdio.h>

int main(){
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&y,&z);
        if((y-x)>2*z){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    
    return 0;
}