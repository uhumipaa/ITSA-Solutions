#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int high, type;
    while (scanf("%d %d", &high, &type) != EOF)
    {
        if (type == 1)
        {
            printf("%.1lf\n", ((double)high - 80) * 0.7);
        }
        else
        {
            printf("%.1lf\n", ((double)high - 70) * 0.6);
        }
    }

    return 0;
}