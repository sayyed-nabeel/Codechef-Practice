#include<stdio.h>

int main(){
    int batterylvl;
    printf("Enter Battery lvl :\n");
    scanf("%d",&batterylvl);
    if (batterylvl<=15){
        printf("YES");
    }
    else {
        printf("NO");
    }


    return 0;
}