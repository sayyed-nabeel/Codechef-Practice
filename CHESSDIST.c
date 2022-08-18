#include <stdio.h>
#include <stdlib.h>



int main()
{
    int t, x1, y1, x2, y2, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int xdist = x1 - x2;
        int ydist = y1 - y2;
        x = abs(xdist);
        // printf("x %d",x);
        y = abs(ydist);
        // printf("y %d",y);
        int totdistance;
        if (x > y)
        {
            totdistance = x;
            printf("%d\n", totdistance);
        }
        else if(y>x){
            totdistance = y;
            printf("%d\n", totdistance);
        }
        else{
            printf("%d\n", x);
        }
    }

    

    return 0;
    }