#include<stdio.h>

int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        if((x+y)%2==0){     //if(x%2==0 && y%2==0)||(x%2!=0 && y%2==0)
            printf("Janmansh\n");//Whenever the sum of moves and starting value i even Janmansh wins

        }
        else{
            printf("Jay\n");
        }
    }

    return 0;
}
