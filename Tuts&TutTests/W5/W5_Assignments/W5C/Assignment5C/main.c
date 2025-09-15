#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

GCD(x, y) =

|x| if y = 0
GCD(y,x mod y) if y ̸= 0

*/

int GCD(int x, int y);

int main()
{
    int x,y, result;
    printf("Enter in 2 integers\n");
    scanf("%d",&x);
    scanf("%d",&y);
    result = GCD(x,y);
    printf("The greatest common divisor is: %d", result);
    return 0;
}

int GCD(int x,int y){
    int gcd;
    if (y==0)
        gcd = abs(x);
    else if (y!=0){
       gcd = GCD(y, (x%y));
    }
    return gcd;
}
