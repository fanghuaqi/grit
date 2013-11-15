#include "stdio.h"

void printnum(int num)
{
    printf("The Num is %d\n", num);
    printf("Num^2 is %d\n\r", num*num);    
}


void main(void)
{
    int i;

    for (i=0; i < 1000; i++) {
	printnum(i);    
    }

}
