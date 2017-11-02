#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Give me a string\n");
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++ )
        {
                printf("%c", toupper(s[i]));

        }
        printf("\n");
    }
}