#include<stdio.h>

int main(){
    int t,m,h;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&h);
        int bmi=m/(h*h);
        if(bmi<=18){
            printf("1\n");
        }
        else if(bmi>=19 && bmi<=24){
            printf("2\n");
        }
        else if(bmi>=25 && bmi<=29){
            printf("3\n");
        }
        else{
            printf("4\n");
        }
    }

    return 0;
}