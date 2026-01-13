#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0, inword=0;
    int abc[26];
    for (int i = 0; i < 26; i++)
    {
        abc[i] = 0;
    }
    char c;
    while ((c = getchar()) != EOF&&c!='\n')
    {
        if (('a' <= c&& c<= 'z') || ('A' <= c &&c<= 'Z'))
        {
            if (inword == 0)count++;
            inword = 1;
            int num = c - 'a';
            if (num < 0)
            {
                num = c - 'A';
            }
            if(num>=0)abc[num]++;
        }
        else
        {
            inword = 0;
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] > 0)
        {
            printf("%c : %d\n", (char)i + 'a', abc[i]);
        }
    }

    return 0;
}