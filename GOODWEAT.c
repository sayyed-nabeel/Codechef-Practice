#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int a[7];
        int sunny = 0;
        int rainy = 0;
        for (int i = 0; i < 7; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < 7; i++)
        {
            if (a[i] == 0)
            {
                rainy++;
            }
            else
            {
                sunny++;
            }
        }
        if (sunny++ > rainy++)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}