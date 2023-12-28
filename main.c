#include <stdio.h>

int main()
{
    
    //--FIRST QUESTION--//
    
    int a;
    printf("ENTER YOUR NUMBER");
    scanf("%d," ,&a);
    
    (a%12==0)?printf("THIS NUMBER IS EVEN"):printf("THIS NUMBER IS ODD");
    
    //--SECOND QUESTION--//
    
    int month;
    printf("ENTER MONTHS");
    scanf("%d", &month);
    
    switch(month)
    {
        case 1:{
            printf("THIS IS A JANUARY MONTH");
            break;
        }
        
        case 2:{
            printf("THIS IS FEBRUARY MONTH");
            break;
        }
        
        case 3:{
            printf("THIS IS A MARCH MONTH");
            break;
        }
        
        case 4:{
            printf("THIS IS A APRIL MONTH");
            break;
        }
        
        case 5:{
            printf("THIS IS A MAY MONTH");
            break;
        }
        
        case 6:{
            printf("THIS IS A JUN MONTH");
            break;
        }
        
        case 7:{
            printf("THIS IS A JULY MONTH");
            break;
        }
        
        case 8:{
            printf("THIS IS A AUGEST MONTH");
            break;
        }
        
        case 9:{
            printf("THIS IS A SEPTEMBER MONTH");
            break;
        }
        
        case 10:{
            printf("THIS IS A OCTOMBER MONTH");
            break;
        }
        
        case 11:{
            printf("THIS IS A NOVEMBER MONTH");
            break;
        }
        
        case 12:{
            printf("THIS IS A DECEMBER MONTH");
            break;
        }
        
        default:{
            printf("INVALID MONTH NO");
        }
    }
    
    //--THIRD QUESTION--//
    
     int A;
    printf("ENTER A YEAR");
    scanf("%d," ,&A);
    
    (A%4==0)?printf("THIS YEAR IS LIP YEAR"):printf("THIS IS NOT A LIP YEAR");
    
    return 0;
}
