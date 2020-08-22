#include <stdio.h>
int main()
{
    float t, c, f, k;
    char temp, unit;
    printf("Enter temperature: ");
    scanf("%f", &t);
    printf("\nEnter unit of temperature you entered ['C','F'or 'K'] : ");
    scanf("\n");
    scanf("%c", &unit);
    printf("You want to convert temperature to C,F or K : ");
    scanf("\n");
    scanf("%c", &temp);
    switch (unit)
    {
    case 'C':
        switch (temp)
        {
        case 'F':
            f = (t * 9 / 5) + 32;
            printf("\n%0.2fC = %0.2fF", t, f);
            break;
        case 'K':
            k = t + 273.15;
            printf("\n%0.2fC = %0.2fK", t, k);
            break;
        default:
            printf("\nEnter valid unit.");
            break;
        }
        break;
    case 'F':
        switch (temp)
        {
        case 'C':
            c = (t - 32) * 5 / 9;
            printf("\n%0.2fF = %0.2fC", t, c);
            break;
        case 'K':
            k = (t - 32) * 5 / 9 + 273.15;
            printf("\n%0.2fF = %0.2fK", t, k);
            break;
        default:
            printf("\nEnter valid unit.");
            break;
        }
        break;
    case 'K':
        switch (temp)
        {
        case 'C':
            c = t - 273.15;
            printf("\n%0.2fK = %0.2fC", t, c);
            break;
        case 'F':
            f = t * (9 / 5) - 459.67;
            printf("\n%0.2fK = %0.2fF", t, f);
            break;
        default:
            printf("\nEnter valid unit.");
            break;
        }
        break;
    default:
        printf("\nEnter valid unit");
    }
    return 0;
}
