#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
int main(void){
    
    // printf("Who are you ?");
    // string name= get_string();
    // // string name = "";
    // printf("%s",name);
    // scanf(hi , name)
    
    float change;
    // float quarter = .25;
    // float dime = .10;
    // float nickel = .05;
    // float penny = .01;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;    
    int bucket = 0;
    
    do
    {
        printf("how much are you owed \n$");
        change = get_float();        
    }
    
    while(change <= 0);
        change = round(change*100);
    
    while (change >= quarter)
    {
            change  -= quarter;
            bucket++;

    }
        while (change >= dime)
    {
            change  -= dime;
            bucket++;

    }
        while (change >= nickel)
    {
            change  -= nickel;
            bucket++;

    }  
        while (change >= penny)
    {
            change  -= penny;
            bucket++;

    }      
    printf("%i\n",bucket);
       
}