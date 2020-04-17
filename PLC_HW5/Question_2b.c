#include <stdio.h>
enum EnumBits
{
    ONE = 1,
    TWO = 2,
    FOUR = 4,
    EIGHT = 8
};
enum Randoms
{
    BIG_COUNT = 20,
    INTCOUNT = 3
};
int main(void)
{
    int a, b, c, d, e, f, g, h, i;
    // Basic Mathimatical operations
    a =(ONE + TWO);    // Value will be 3.
    b =(FOUR - TWO);   // Value will be 2.
    c =(TWO * EIGHT);  // Value will be 16.
    d =(EIGHT / TWO);  // Value will be 4.

    // Some bitwise operations
    e =(ONE | TWO);    // Value will be 3.
    f =(TWO & FOUR);   // Value will be 0.
    g =(TWO ^ EIGHT);  // Value will be 10.
    h =(EIGHT << 1);   // Value will be 16.
    i =(EIGHT >> 1);   // Value will be 4.

    // Initialize an array based upon an enum value
    int intArray[INTCOUNT];
    
    printf("%d ", a);
     printf("%d ", b);
      printf("%d ", c);
       printf("%d ", d);
        printf("%d ", e);
         printf("%d ", f);
          printf("%d ", g);
           printf("%d ", h);
            printf("%d ", i);
    
    // Have a value initialized be initialized to a static value plus
    // a value to be determined by an enum value.
    int someVal = 5 + BIG_COUNT;
    
    

    return 0;
}
