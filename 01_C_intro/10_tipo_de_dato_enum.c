//Un resumen acerca de enum:

//Used to assign names to integral constants.

//If we dont assigns values to enum names then, automatically compiler will start to assign values since 0
//ej=

//enum letters {A, B, C, D};
//Me: ¿What´s A? 
//Computer: You didn´t say me. I´ll define A as 0, B as 1, and so on.
//
//enum jumm{A=1, S=11, D, F =77, G};
//Me: ¿What´s D and G?
//Computer: 12 and 78

//<h3>Enum</h3>
//enum: guarda valores constantes en una lista, aunque puede incluir variables.
//#include <stdio.h>

//enum designElements
//{
//    ITALIC = 1;
//    BOLD = 2;
//    STRIKE = 3;
//}

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
    printf("Card size %d \n", sizeof(card));
    return 0;
}