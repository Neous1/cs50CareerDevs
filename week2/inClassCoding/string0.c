#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string();
    printf("hello, %s\n", s);
    if(s != NULL); // insures we have something to work with
    //iterate thru the string and print each index of hte string
    for(int i = 0; i<strlen(s); i++){
        printf("%c\n", s[i]);
    }
}