#include "stdio.h"

void printnum(int num)
{
    printf("Num is %d\n\r", num);
    printf("Num^2 is %d\n\r", num*num);    
}


void main(void)
{
    int i;

    for (i=0; i < 100; i++) {
	printnum(i);    
    }

}
