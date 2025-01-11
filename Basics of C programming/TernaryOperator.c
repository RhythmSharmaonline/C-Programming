#include <stdio.h> 

int findmax(int x,int y){
   /* if (x>y)
    {
        return x;
    }
    else{
        return y;
    }*/

    return (x>y) ? x:y; //This is the condition. We use ? to use this condition. BY THIS THERE IS NO NEED TO WRITE IF ELSE STATEMENT. AND ITS SYNTAX IS {return(condition) ? if value is true:if value is false;} 
    
}
int main(void)
{
    int max= findmax(3,6);

    printf("%d",max);
    
}