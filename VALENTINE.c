#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        int totchoco = x / y;

        printf("%d\n", totchoco);
    }

    return 0;
}