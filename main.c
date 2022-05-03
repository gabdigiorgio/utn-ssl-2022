// Gabriel Enrique Di Giorgio
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char ch;
    printf("Ingrese caracteres: ");
    ch = getchar();
    while (ch != EOF)
    {
        if (isupper(ch))
        {
            ch = tolower(ch);
            putchar(ch);
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
            putchar(ch);
        }
        else if (!isdigit(ch))
        {
            putchar(ch);
        }

        ch = getchar();
    }

    return EXIT_SUCCESS;
}