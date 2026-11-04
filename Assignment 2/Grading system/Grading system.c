#include <stdio.h>
#include <stdlib.h>

int main()
{
    double marks;
    printf("Insert students marks kindly:");
    scanf("%lf", & marks);
    if (marks >= 70){
        printf("Grade A\n");
    }
    else if (marks>=60){
             printf("Grade B\n");
    }
    else if (marks >= 50){
        printf("Grade C\n");
    }
    else if (marks>= 40){
        printf("Grade D\n");
    }
    else {
        printf("Grade E\n");
    }


}
