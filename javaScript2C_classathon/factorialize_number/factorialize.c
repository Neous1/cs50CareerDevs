#include <stdio.h>
#include <cs50.h>
int num;

int i; 
int factorialize (num);

int main (void)
{
    printf("Give me a number\n");
    num = get_int();g
}

int factorialize (num)
{

    
    if(num == 0){
        // printf(%i, num);
        return 1;
    }
    for( i = num -1; i >=1; i--){
        num*= i;
    }
    return num;
}
