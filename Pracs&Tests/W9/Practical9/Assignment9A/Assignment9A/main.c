#include <stdio.h>
#include <stdlib.h>


typedef struct {
float real;
float imag;
} Complex;
Complex addComplex(Complex n1, Complex n2);


int main()
{
    float nr1, nr2, ni1, ni2;

    printf("Enter in 2 complex numbers please - 2 Real numbers, then 2 imaginary number\n");
    scanf("%f", &nr1);
    scanf("%f", &nr2);
    scanf("%f", &ni1);
    scanf("%f", &ni2);

    Complex n1 = {nr1, ni1};
    Complex n2 = {nr2, ni2};



    printf("n1: %f + %f i\n", n1.real, n1.imag);
    printf("n2: %f + %f i\n", n2.real, n2.imag);

    printf("Sum of the two complex numbers is: %f + %fi\n", addComplex(n1, n2).real, addComplex(n1, n2).imag);



    return 0;
}

Complex addComplex(Complex n1, Complex n2){

    Complex sum = {(n1.real+n2.real), (n1.imag+n2.imag)};
    return sum;


}
