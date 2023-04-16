#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count=0;
        char s[n];
        scanf("%s",&s);
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                i++;
                count++;
            }
            else{
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}