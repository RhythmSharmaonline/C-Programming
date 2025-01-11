#include <stdio.h> 

int main()
{
    //Switch : More efficient alternative of making if else if ladder
    char grade; //Here we can also use int, float and double as per your requirement

    printf("Enter grade:");
    scanf("%c",&grade);

    switch (grade)          //Switch case 
    {
    case 'A':
        printf("You Did well!!\n");
        break;                          // Break is important because without break all the printf statement run at once
    case 'B':
        printf("Very good\n");    
        break;
    case 'C':
        printf("very nicee!!\n");
        break;    
    default:                        //This works as else in switch cases
        printf("Better luck next time!!");
        break;
    }

    return 0;

}