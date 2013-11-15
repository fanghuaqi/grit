#include "stdio.h"

void printnum(int num)
{
    printf("Num is %d\n", num);
}

void main(void)
{
    int i;

    for (i=0; i < 100; i++) {
	printnum(i);    
    }

}
