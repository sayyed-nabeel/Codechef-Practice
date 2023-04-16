#include<stdio.h>

int main(){
    int r,o,c;
    scanf("%d %d %d",&r,&o,&c);
    int can_score=(20-o)*6*6;
    int tot_score=can_score+c;
    if(tot_score<=r){
        printf("NO");
    }
    else{
        printf("YES");
    }

    
    return 0;
}