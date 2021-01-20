#include <stdio.h>

int main()
{
    int iSelect;

    float fnum1, fnum2;

    printf("Please enter 2 numbers: \n");
    scanf("%f %f", &fnum1, &fnum2);
    printf("Select 1 for addition, 2 for subtraction 3 for multiplication, 4 for division: \n");
    scanf("%d", &iSelect);

    switch (iSelect) {

    case 1:
        printf("The sum of the two values is %f \n", fnum1 + fnum2);
        break;

    case 2:
        printf("The difference of the two values is %f \n", fnum1 - fnum2);
        break;

    case 3:
        printf("The product of the two values is %f \n", fnum1 * fnum2);
        break;

    case 4:
        printf("The dividend of the two products is %f \n", fnum1 / fnum2);
        break;
    default:
        printf("Please select options 1 to 4 only \n");
        break;
    }

    return 0;
}
