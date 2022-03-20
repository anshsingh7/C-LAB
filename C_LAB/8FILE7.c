#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], c;
    printf("Ansh Singh\n");
    puts("Enter the string");
    gets(a);
    c = *a;
    strrev(a);

    if (c == *a)
    {
        puts("Given string is palindrome.");
    }
    else
    {
        puts("Given string is not palindrome.");
    }

    return 0;
}



