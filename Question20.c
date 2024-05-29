// Vishal Gupta
// 2303510100108

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of day : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        pritnf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Wrong Entry");
        break;
    }

    return 0;
}
