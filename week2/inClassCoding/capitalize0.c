#include <cs50.h>
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
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - ('a'-'A'));
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}