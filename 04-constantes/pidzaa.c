#include <stdio.h>

#define PIZZACOST 1.5
const NEWLINE = '\n';

int main()
{
    float costPizzas;
    float numberofslices = 3;
    costPizzas = PIZZACOST * numberofslices;
    printf("Total bill: %c %f",NEWLINE, costPizzas);
}