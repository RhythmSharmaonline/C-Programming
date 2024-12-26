#include <stdio.h> 

int main()
{
    int a=676;

    float b=6.877383724724383818279128378937812323;

    char c='c';

    double r=6.023238379812379821739812; 

    
    // To check precision of float and double

    printf("value of b:%0.15f\n",b);
    printf("value of r:%0.16lf\n",r);
    return 0;
}