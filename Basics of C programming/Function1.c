#include <stdio.h> 

void tony( char name[], int age)/*Here these are parameters*/{ 
    printf("Enter your name:%s\n",name);
    printf("Enter your age:%d\n",age);
    
}

int main(void)
{
    char name[]="bro";
    int age=353;
    tony(name, age );   //Here these are Arguments 
    
}