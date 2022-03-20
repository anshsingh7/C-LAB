#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[15], f;
    int c = 0, i;

    printf("Ansh Singh \n");
    puts("Enter the string");
    gets(s);
    puts("Enter the character to find: ");
    f = getchar();
    for (i = 0; i <= 15; i++)
    {
        if (s[i] == f)
            c++;
    }

    printf("The character %c in a string %s occurs %d times", f, s, c);
    return 0;
}
