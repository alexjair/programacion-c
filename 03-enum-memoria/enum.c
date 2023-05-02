#include <stdio.h>

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15,
    uvas = 20,
    peras = 25
} card;

int main()
{
    //card = spades;
    //printf("Card size %d \n", sizeof(card));
    
    card = peras;
    printf("Peras %d \n", card);

    return 0;
}