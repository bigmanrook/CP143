#include <stdio.h>

int maximum(int a, int b, int c, int d); // function prototype

int main()
{
    int w, x, y, z;
    scanf("%d", &w); // input handled by CodeRunner
    scanf("%d", &x); // input handled by CodeRunner
    scanf("%d", &y); // input handled by CodeRunner
    scanf("%d", &z); // input handled by CodeRunner

    printf("The maximum of %d, %d, %d, and %d", w, x, y, z);
    printf(" is %d", maximum(w,x,y,z));

    return 0;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
int maximum(int a, int b, int c, int d){

    if ((a>b)&&(a>c)&&(a>d))
        return a;
    if ((b>a)&&(b>c)&&(b>d))
        return b;
    if ((c>b)&&(c>a)&&(c>d))
        return c;
    if ((d>b)&&(d>c)&&(d>a))
        return d;


}
