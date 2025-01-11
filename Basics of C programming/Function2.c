#include <stdio.h> 

void info(char x[],int y){      //Here order of Matching of parameters is necessary.
    printf("enter your name:%s\n",x);
    printf("enter your age:%d\n",y);
}
int main(void)
{
    char name[]="Rhythm";
    int age=21;

    info(name, age );
}