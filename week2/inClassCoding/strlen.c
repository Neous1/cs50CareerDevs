#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("What's your name?\n");
    string s = get_string();
    int n = 0;
    while (s[n] != '\0') //the '/0 represent the end of hte string'
    {
        n++;
    }
    printf("%i\n", n);
}