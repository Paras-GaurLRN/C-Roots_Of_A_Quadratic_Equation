#include <stdio.h>
#include <math.h>

void main(){
    //Taking The Values
    float a = 1, b = 0, c = 0;
    printf("### Roots Of A Quadratic Equation ###\n\n");
    printf("Enter the values of a , b , c for-\n a(x)^2 + b(x) + c = 0\n\n");
    printf("\na = "); scanf("%f",&a);
    int ACK1 = (a==0);
    printf("\nb = "); scanf("%f",&b);
    printf("\nc = "); scanf("%f",&c);
    int CCK = (c==0);

    //Check for degree of Polynomial
    if(ACK1 && b==0){(CCK) ? printf("\nThe Equation Has Infinitely Many Solutions") : printf("\nNo Solutions To The Equation");return;}
    else if(ACK1){printf("\nThe Equattion Is A Linear Equation, Not Quadrattic");(CCK) ? printf("\nThe Solution is x = 0") : printf("\nThe Solution is x = %f", ((float) -b/c));return;}

    //Now Finding Nature Of Roots
    printf("\nNature Of Roots: ");
    float D = b*b - 4*a*c;
    int DCK = (D<0);
    if(DCK){printf("The Roots Are Imaginary\n\n");}
    else{(D==0) ? printf("The Roots Are Real & Equal\n\n") : printf("The Roots Are Real & Distinct\n\n");}

    //Now Finding The Roots
    float b2a = (float) (-b/(2*a)) , D2a = fabsf((float) (sqrtl(fabsf(D))/(2*a)));
    if(!DCK){printf("The Roots Are:\n-> %f\n-> %f", (b2a + D2a) , (b2a - D2a));}
    else{printf("The Roots Are:\n-> %f + i(%f)\n-> %f - i(%f)", b2a , D2a , b2a , D2a);}
}