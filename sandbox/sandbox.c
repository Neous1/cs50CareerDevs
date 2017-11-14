// #include <cs50.h>
#include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char text[] = "hello!";
//     printf("%s",text);
//     return 0;
// }



int main(void)
{
int a = 0, b = 0, c;

while ( a < 10){
printf("out:  a : %d\tb: %d\tc: %d\n", a,b,c);  
    while (b < 10){
    printf("in:  a : %d\tb: %d\tc: %d\n", a,b,c);       
        c = a * b;
        b++;
    }
    a++;
}
printf("a : %d\tb: %d\tc: %d\n", a,b,c);
}