int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        while (n)
        {
            if (n % 10 == 4)
            {
                count++;
            }
            n = n / 10;
        }

            printf("%d\n", count);
        }

        return 0;
    }