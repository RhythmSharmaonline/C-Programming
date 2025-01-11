#include <stdio.h> 

int main()
{
    int a=878;
    int b=87;

    // Augmented Operators: Augmented assignment operators are a shorthand way to perform an operation.

    // +=: Addition assignment
    // -=: Subtraction assignment
    // *=: Multiplication assignment
    // /=: Division assignment
    // %=: Modulo assignment
    // <<=: Left shift assignment
    // >>=: Right shift assignment

    int a=98;
    int b=2;

    int x= a+=b;


    printf("Addition assigment=%d\n",a+=b);
    printf("Subtraction assigment=%d\n",a-=b);
    printf("Multiplication assigment=%d\n",a*=b);
    printf("Division assigment=%d\n",a/=b);
    printf("Modulo assigment=%d\n",a%=b);
    printf("Left Shift assigment=%d\n",a<<=b);
    printf("Right Shift assigment=%d\n",a>>=b);
    
    
    
    return 0;
}