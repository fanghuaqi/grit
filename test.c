#include "stdio.h"

void printnum(int num)
{
    printf("The Num is %d\n", num);
}

void main(void)
{
    int i;

    for (i=0; i < 1000; i++) {
	printnum(i);    
    }

}
