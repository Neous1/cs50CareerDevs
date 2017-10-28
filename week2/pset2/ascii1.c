#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
//     for (int i = 65; i < 65+26; i++)
//     {
//         printf("%c is %i \n", i, i); //printf format the int to char
//     }

    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c is %i\n", c, c);
    }
    
}