#include <stdio.h>

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15,
} card;

int main()
{
    card = spades;
    printf("Card Power %d \n", card);
    printf("size of var %d \n", sizeof(card));
    printf("Card size %d \n", sizeof(card));
    return 0;
}

