// const int COSTHOTDOG = 100;
// const float BILL = 100.58;
// const char NEWLINE = '\n'

#include <stdio.h>

#define PIZZACOST 1.5
const char NEWLINE = '\n' ;

int main(){
    float costPizza;
    float numberOfSlices = 3;
    costPizza = PIZZACOST * numberOfSlices;

    printf("Total bill: %c %f", NEWLINE, costPizza);
}