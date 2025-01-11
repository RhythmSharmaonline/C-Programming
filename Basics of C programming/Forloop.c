#include <stdio.h> 

int main(void)
{
    int i=19;
    for (int i=0; i<15; i++)
    {
        if (i==8)
        {
            //  break; //Completely exit the loop 
            continue; // Skips the particular iteration of the loop
        }
        
        printf("Entered value is Valid:%d\n",i);
    }
    
}