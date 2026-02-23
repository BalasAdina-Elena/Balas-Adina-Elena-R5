#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conv(char s[])
{
    int nr = 0, i = 0;
    

    while (s[i] != '\0' && s[i] != '\n')
    {
        nr = nr * 10 + (s[i] - '0');
        i++;
    }

    return nr;
}

int main()
{
    FILE* fptr = fopen("in.txt", "r");
    char l[256];
    int sum = 0;
    if (fptr != NULL)
    {
        while (fgets(l, 256, fptr) != NULL)
        {
            sum = sum + conv(l);

        }

        
    }
    printf("%d", sum);
    fclose(fptr);

    
}
