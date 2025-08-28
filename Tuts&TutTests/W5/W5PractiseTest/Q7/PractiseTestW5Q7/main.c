#include <stdio.h>

int max2(int a, int b);
int max4(int a, int b, int c, int d);

int main() {
    int x1, x2, x3, x4;

    scanf("%d", &x1); // Input handled by CodeRunner
    scanf("%d", &x2); // Input handled by CodeRunner
    scanf("%d", &x3); // Input handled by CodeRunner
    scanf("%d", &x4); // Input handled by CodeRunner

    printf("max2(%d,%d) = %d\n", x1, x2, max2(x1,x2));
    printf("max4(%d,%d,%d,%d) = %d\n", x1, x2, x3, x4, max4(x1,x2,x3,x4));

    return 0;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
int max2(int x, int y){

    if (x>y){
       return x;
    }
    return y;

}


int max4(int x, int y, int w, int z){

 int max;

 return max2(max2(max2(x,y), w), z);

}
