#include <iostream>
using namespace std;
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
    // Basic Mathimatical operations
    cout << (ONE + TWO) << endl;    // Value will be 3.
    cout << (FOUR - TWO) << endl;   // Value will be 2.
    cout << (TWO * EIGHT) << endl;  // Value will be 16.
    cout << (EIGHT / TWO) << endl;  // Value will be 4.

    // Some bitwise operations
    cout << (ONE | TWO) << endl;    // Value will be 3.
    cout << (TWO & FOUR) << endl;   // Value will be 0.
    cout << (TWO ^ EIGHT) << endl;  // Value will be 10.
    cout << (EIGHT << 1) << endl;   // Value will be 16.
    cout << (EIGHT >> 1) << endl;   // Value will be 4.

    // Initialize an array based upon an enum value
    int intArray[INTCOUNT];

    // Have a value initialized be initialized to a static value plus
    // a value to be determined by an enum value.
    int someVal = 5 + BIG_COUNT;
    return 0;
