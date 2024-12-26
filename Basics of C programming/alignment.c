#include <stdio.h> 

int main()
{
    float item= 56.23858594;
    float rate= 45.67755857;
    float intrest= 0.0544849;


    //%1= Minimum field width
    //%.1= Decimal precision

    printf("Item:$%8.6f\n",item); 
    printf("rate:$%8.4f\n",rate); 
    printf("intr:$%8.2f\n",intrest); 
    
    return 0;
}