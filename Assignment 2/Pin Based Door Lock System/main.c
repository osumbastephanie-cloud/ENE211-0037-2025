#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CorrectPin=9999;
    int UserPin;
    printf("Please insert your UserPin.");
    scanf("%d",&UserPin);
    if (UserPin==9999){
        printf("Access granted.");
    }
    else if (UserPin<999){
        printf("The UserPin should have exactly four digits.");
    }else if (UserPin>9999){
    printf("The UserPin should have exactly four digits .");
    }
    else{
        printf("Access denied.");
    }

    return 0;

}
