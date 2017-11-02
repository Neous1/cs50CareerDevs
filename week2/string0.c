#include<cs50.h>
#include<stdio.h>

int main(void)
{
    string s = get_string();
    printf("hello, %s\n", s);
    for(int i = 0; i<strlen(s); i++){
        printf("%c\n", s[i]);
    }
}