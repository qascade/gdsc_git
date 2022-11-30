#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "gdsc.h"


//Bug
int add(int a, int b) {
    return a + b;
}


int main() {
    puts("Hello World!"); 
    printf("add(1, 2) = %d", add(1,2));
    return 0;
}