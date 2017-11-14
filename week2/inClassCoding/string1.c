#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("provide a string\n");
    string s = get_string(); 
    // make sure get_string return a string
    if (s != NULL)
    {
        for (int i =0, n = strlen(s); i < n; i++) // i and n are declared together
        {
            //print the index of string
            printf("%c\n", s[i]);
        }
    }    
}