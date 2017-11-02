#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("What's your name?\n");
    string s = get_string();
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}