#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[5];
        char t[5];
        scanf("%s", &s);
        scanf("%s", &t);

        for (int i = 0; i < 5; i++)
        {

            if (s[i] != t[i])
            {
                printf("B");
            }
            else
            {
                printf("G");
            }
        }
        printf("\n");
    }

    return 0;
}