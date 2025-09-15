#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

LCM(x, y) =
|x|·|y|
GCD(x, y)

*/

int LCM(int x, int y);
int GCD(int x, int y);
void arithmeticFractions(int n1, int d1, int n2, int d2);

int main()
{
    int x, y, w, z;
    printf("Please enter in 2 fractions (numerator then denominator each time)\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &w);
    scanf("%d", &z);
    arithmeticFractions(x,y,w,z);

    return 0;
}

int GCD(int x,int y){
    int gcd;
    if (y==0)
        gcd = abs(x);
    else if (y!=0){
       gcd = GCD(y, (x%y));
    }
    //printf("%d", gcd);
    return gcd;
}

int LCM(int x, int y){

    int lcm;
    lcm = ((abs(x)*abs(y))/(GCD(x,y)));
    return lcm;

}

void arithmeticFractions(int n1, int d1, int n2, int d2){

int num1, num2,num, den;
    den = LCM(d1,d2);
    num1 = (n1*den/d1);
    num2 = (n1*den/d2);
    num = num1+num2;
    //printf("\n%d", num2);


    printf("The result is: %d/%d", num, den);


}
