#include <stdio.h>
#include <cs50.h>

int sum = 0, curFib = 1, priorFib = 0, num = 0;

int main(void)
{
    printf("get me a number\");
    sum = get_int();
    while (curFib <= num)
    {
        if(curFib % 2 != 0)
        {
            sum += curFib; 
        }
    }
    return sum ;
}