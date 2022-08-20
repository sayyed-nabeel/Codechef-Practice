#include<stdio.h>

int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        if((x/2)<y){
            int tot_chaats=x/2;
            printf("%d\n",tot_chaats);
        }
        else{
            int tot_chaats=y;
            printf("%d\n",tot_chaats);
        }
      
        
    }

    return 0;
}