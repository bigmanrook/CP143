#include <stdio.h>
#include <stdlib.h>


typedef struct {
float real;
float imag;
} Complex;
Complex addComplex(Complex n1, Complex n2);


//type struct whatever={var1, var2, var3};


int main()
{
    Complex n1, n2;

    printf("Enter in 2 complex numbers please - 2 Real numbers, then 2 imaginary number\n");
    scanf("%f", &n1.real);
    scanf("%f", &n2.real);
    scanf("%f", &n1.imag);
    scanf("%f", &n2.imag);

    printf("n1: %f + %f i\n", n1.real, n1.imag);
    printf("n2: %f + %f i\n", n2.real, n2.imag);

    printf("Sum of the two complex numbers is: %f + %fi\n", addComplex(n1, n2).real, addComplex(n1, n2).imag);



    return 0;
}

Complex addComplex(Complex n1, Complex n2){

    Complex sum = {(n1.real+n2.real), (n1.imag+n2.imag)};
    return sum;


}
