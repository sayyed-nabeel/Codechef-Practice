#include<stdio.h>

int main(){
    int t,x1,x2,y1,y2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
        int x_car=y1/x1;
        int y_car=y2/x2;
        if(x_car>y_car){
            printf("-1\n");
        }
        else if(x_car<y_car){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}