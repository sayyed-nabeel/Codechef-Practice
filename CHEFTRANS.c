#include<stdio.h>

int main(){
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&y,&z);
        int planebus=x+y;
        int train=z;
        if(planebus>train){
            printf("TRAIN\n");
        }
        else if(train>planebus){
            printf("PLANEBUS\n");
        }
        else{
            printf("EQUAL\n");
        }
    }

    return 0;
}