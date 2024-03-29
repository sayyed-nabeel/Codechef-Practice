#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//BODY

nt stackArr[100005];
int top = -1;
void push(int x){
top++;
stackArr[top]=x;
}
int peek(){
return stackArr[top];
}
void pop(){
stackArr[top]=NULL;
top--;
} 
int empty(){
if(top==-1)
return 1;
else
return 0;
}

//TAIL

int main()
{
    int n;
    top = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, x;
        scanf("%d", &t);
        if (t == 1) {
            scanf("%d", &x);
            push(x);
        }
        else if (t == 2) {
            if (empty()) {
                printf("Invalid\n");
            }
            else {
                pop();
            }
        }
        else if (t == 3){
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            for (int j = top; j >= 0; j--) {
                printf("%d ", stackArr[j]);
            }printf("\n");
        }
        else {
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            printf("%d\n", peek());
        }
    }
    return 0;
}