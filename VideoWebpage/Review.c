#include <stdio.h>


int main() {
    int x = 2;
    int y = 3;
    int z =  8 != 8 && 67 || 10 > 2 && !1 || 11 < 9 && 11 == 9 || 0 == !1; //Outputs 1

    x < y ? printf("red\n") : printf("blue\n"); //Outputs "red" if true | "blue" if false

    printf("%d\n", z); 

    if (x < y) { //con1
        if (x == 2) { //con2 (Move here if con1 is true)
            printf("red\n"); //Only executes if con2 is true
        } else {
            printf("blue\n"); //Only executes if con2 is false
        } 
    }
    else 
    {
        printf("green\n"); //Only executes if con1 is false
    }

    if (x < y) 
        printf("integer %d is less than %d\n", x, y);
    else if (x > y)
        printf("integer %d is greater than %d\n", x, y);
    else printf("integer %d is equal to %d\n", x, y);
    
    
    return 0;
}
