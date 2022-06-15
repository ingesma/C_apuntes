#include <stdio.h>
int main()
{
     int num =0;
     while(num<=100)
     {
        printf("value of variable num is: %d\n", num);
        if (num==2)
        {
            break; //llega al final
        }
        num++;
     }
     printf("Out of while-loop");
     return 0;
}