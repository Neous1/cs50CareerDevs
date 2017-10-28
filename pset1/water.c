#include <stdio.h>
#include <cs50.h>

int main(void){
    
    printf("How long is your shower \n");
    int minutes = get_int();
    // printf("%d \n",minutes);
    int bottles = 12;
    bottles = minutes * bottles;
    printf("You've used %d bottles \n", bottles);    
}