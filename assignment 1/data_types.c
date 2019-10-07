#include <stdio.h>

int main()
{
    //code
    char ran_char = 'A';
    signed char signed_char = '5';
    unsigned char unsigned_char = '6';
    int ran_int = 1;
    signed int sign_int = -1;
    unsigned int unsign_int = 2;
    short int short_int = -97;
    unsigned short int unsign_short_int = 97;
    long int long_int = -2343563;
    unsigned long int unsign_long_int = 2345637;
    float my_float = 33.145;
    double my_double = 3.134234234232;
    long double long_double = 1.343e+54; //i have no idea how this works
    
    printf("My char is: %c\n", ran_char);
    printf("My signed char is: %c\n", signed_char);
    printf("My unsigned char is: %c\n", unsigned_char);
    printf("My integer is: %d\n", ran_int);
    printf("My signed integer is: %d\n", sign_int);
    printf("My unsigned integer is: %d\n", unsign_int);
    printf("My short integer is: %d\n", short_int);
    printf("My unsigned short integer is: %d\n", unsign_short_int);
    printf("My long integer is: %d\n", long_int);
    printf("My unsigned long integer is: %d\n", unsign_long_int);
    printf("My float is: %f\n", my_float);
    printf("My double is: %lf\n", my_double);
    printf("My long double is: %Lg\n", long_double);


    return 0;
}